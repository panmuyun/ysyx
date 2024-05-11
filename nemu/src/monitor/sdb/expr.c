/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "/home/panmy/ysyx-workbench/nemu/include/common.h"
#include <isa.h>
//#include "isa/riscv32/local-include/reg.h"
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include "/home/panmy/ysyx-workbench/nemu/src/isa/riscv32/local-include/reg.h"
#include <memory/vaddr.h>


enum {
  TK_NOTYPE = 256,
  TK_HEXADECIMAL,
  TK_NUMBER,
  TK_REGNAME,
  TK_EQ,
  TK_NOTEQ,
  TK_AND,
  TK_DEREFERENCE

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"0x[0-9]+", TK_HEXADECIMAL},
  {"-?[0-9]+", TK_NUMBER},
  {"\\$[a-z]*[0-9]*", TK_REGNAME},
  //{"\\*[a-zA-Z]+[0-9]*", TK_DEREFERENCE}
  {"\\+", '+'},         // plus
  {"\\-", '-'},
  {"\\*", '*'},
  {"\\/", '/'},
  {"\\(", '('},
  {"\\)", ')'},
  {"==", TK_EQ},        // equal
  {"!=", TK_NOTEQ},
  {"&&", TK_AND}

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED); //编译rules中的正则表达式
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

/*初始化结构体数组 tokens 的默认值*/
void resetTokens(Token tmptokens[], int size) {
    for (int i = 0; i < size; i++) {
        tmptokens[i].type = 0; // 设置默认值
        strcpy(tmptokens[i].str, "\0");// 设置其他成员的默认值...
    }
}

#define Tokens_LEN 400
static Token tokens[Tokens_LEN] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

/*分解表达式为多个token*/
static bool make_token(char *e) { 
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0; //表示当前在处理第几个token

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) { //匹配成功 且 从目标串的第一个字符开始匹配
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        if(nr_token!=0 && ( tokens[nr_token-1].type==TK_NUMBER || tokens[nr_token-1].type=='(' ||  tokens[nr_token-1].type==')' )
        && *substr_start=='-'){ //上一个token是数字 且 当前获取了一个‘-’
          substr_len=1;
          // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
          //   i, "\\-", position, substr_len, substr_len, substr_start);
          position += substr_len;
          tokens[nr_token].type='-';
          strcpy(tokens[nr_token].str, "-");
          nr_token++;
          break;
        }
        
        // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        
        char substr[Tokens_LEN]={};
        for (int index = 0; index < substr_len; index++){
          substr[index]=*(substr_start+index);
        }

        if(rules[i].token_type != TK_NOTYPE){
          tokens[nr_token].type = rules[i].token_type;
          strcpy(tokens[nr_token].str, substr);
          if(tokens[nr_token].type == '*' 
          && (nr_token==0 || tokens[nr_token-1].type=='+' || tokens[nr_token-1].type=='-'
              || tokens[nr_token-1].type=='*' || tokens[nr_token-1].type=='/' 
              || tokens[nr_token-1].type==TK_EQ || tokens[nr_token-1].type==TK_NOTEQ
              || tokens[nr_token-1].type==TK_AND )){ //特别处理指针解引用的情况，根据前一个token的类型来判断
            tokens[nr_token].type = TK_DEREFERENCE;
          }
          nr_token++;
        }
      
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  return true;
}


/*判断最外层的“()”是否可以删掉*/
bool check_parentheses(int p, int q, bool *success){ 
  if(tokens[p].type=='(' && tokens[q].type==')'){
    int left_parenthese = 0;
    for (int i = p+1; i < q; i++){
      if(left_parenthese<0) //一旦为负数，说明右括号个数多于左括号个数，必不匹配
        return false;
      if(tokens[i].type=='(')
        left_parenthese++;
      else if(tokens[i].type==')')
        left_parenthese--;
    }
    if(left_parenthese==0)  //除去最外层的括号“()”，内部的所有括号能匹配上
      return true;
    else{
      printf("p = %d; q = %d; left_parenthese = %d\n", p, q, left_parenthese);
      Log("expression invalid (parenthese)");
      *success = false;
      // Assert(left_parenthese==0, "expression invalid (parenthese)");
      return false;
    }
      
  }else
    return false;
}

/*找到主操作符，赋值给mainop*/
void find_mainop(int p, int q, int *mainop){  
  int flag_parentheses=0; //不能简单用0/1值，否则“2+(((2+3)*4)-1)”时，由于右括号的出现，会让mainop指向'-'
  for (int op = p; op <= q; op++){
    if (tokens[op].type=='('){
      flag_parentheses++;
      continue;
    }
    if (tokens[op].type==')'){
      flag_parentheses--;
      continue;
    }
    if (tokens[op].type == TK_NUMBER || tokens[op].type == TK_HEXADECIMAL 
    || tokens[op].type == TK_REGNAME || tokens[op].type == TK_DEREFERENCE || flag_parentheses>=1){
      continue;
    }
    if (*mainop ==-1){// +-*/ == != &&
      *mainop=op;
      continue;
    }
    if(tokens[*mainop].type=='*' || tokens[*mainop].type=='/'){
      if(tokens[op].type=='*' || tokens[op].type=='/' || tokens[op].type=='+' || tokens[op].type=='-' 
      || tokens[op].type==TK_EQ || tokens[op].type==TK_NOTEQ || tokens[op].type==TK_AND){
        *mainop=op;
        continue;
      }
    } 
    if (tokens[*mainop].type=='+' || tokens[*mainop].type=='-'){
      if(tokens[op].type=='+' || tokens[op].type=='-' || tokens[op].type==TK_EQ 
      || tokens[op].type==TK_NOTEQ || tokens[op].type==TK_AND){
        *mainop=op;   
        continue;     
      }
    }
    if (tokens[*mainop].type==TK_EQ || tokens[*mainop].type==TK_NOTEQ){
      if(tokens[op].type==TK_EQ || tokens[op].type==TK_NOTEQ || tokens[op].type==TK_AND){
        *mainop=op;   
        continue;     
      }
    }
  }
}

/*表达式求值*/
EXPR_value_TYPE eval(int p, int q, bool *success){
  if(p > q){  //表达式为空
    Log("expression is missing");
    *success = false;
    // Assert(p<=q, "expression is missing");
    return -1;
  }else if(p == q){ //表达式中只有一个token
    switch (tokens[p].type){
      case TK_NUMBER:
        return (EXPR_value_TYPE)atoi(tokens[p].str); //整数
      case TK_HEXADECIMAL:
        char *endptr;
        vaddr_t addr = (vaddr_t)strtol(tokens[p].str, &endptr, 0);
        return addr;  //内存地址
        // return (EXPR_value_TYPE)vaddr_read(addr, 4); //内存中的值
      case TK_REGNAME:
        char *regname = (tokens[p].str[1]=='0') ? tokens[p].str : tokens[p].str+1;
        bool success;
        return (EXPR_value_TYPE)isa_reg_str2val(regname, &success);
      default:
        break;
    }
    Log("expression after deference '*' is missing");
    *success = false;
    return -1;
    // Assert(0, "expression after deference '*' is missing");
  }else{ 
    //是否删除最外层的括号
    if(check_parentheses(p, q, success) == true)  
      return eval(p+1, q-1, success);
    if(*success==false)
      return -1;
    
    //处理 expr <op> expr的情况
    int mainop=-1;
    find_mainop(p, q, &mainop);
    if(mainop==-1 && tokens[p].type==TK_DEREFERENCE){
      mainop=p;
    } 

    if(mainop==-1){
      Log("expression invalid (parenthese fail or mainop miss)");
      *success = false;
      return -1;
    }
    // Assert(mainop!=-1, "expression invalid (parenthese fail or mainop miss)");

    if(tokens[mainop].type==TK_DEREFERENCE){
      vaddr_t addr = eval(mainop+1, q, success);
      return (EXPR_value_TYPE)vaddr_read(addr, 4); //内存中的值
    }else{
      EXPR_value_TYPE val1 = eval(p, mainop-1, success);
      EXPR_value_TYPE val2 = eval(mainop+1, q, success);
      switch (tokens[mainop].type){
        case '+': return val1 + val2;
        case '-': return val1 - val2;
        case '*': return val1 * val2;
        case '/': 
                  if(val2!=0)
                    return val1 / val2;
                  else{
                    Log("exists division by 0 operation");
                    *success = false;
                    return -1;
                    // Assert(val2!=0, "exists division by 0 operation");
                  }
                  // ##################   *0x80000000/(3*(2/3))
        case TK_EQ: return val1 == val2 ? 1:0; 
        case TK_NOTEQ: return val1 != val2 ? 1:0;
        case TK_AND: return val1 && val2 ? 1:0;
        default:  assert(0);return -1;
      }
    }
  }
}

EXPR_value_TYPE expr(char *e, bool *success) {
  int length_tokens = sizeof(tokens)/sizeof(tokens[0]);
  resetTokens(tokens, length_tokens);

  if (!make_token(e)) {
    if(success!=NULL)
      *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  int q=0;
  for (int i = 0; i < length_tokens; i++){
    if (tokens[i].type != 0){
      q++;
      //printf("tokens[%d].type = %d  ;  str = %s\n", i, tokens[i].type, tokens[i].str);
    }else
      break;
  }
  //printf("q = %d\n", q);
  if(success!=NULL)
    *success = true;

  return eval(0, q-1, success);
}
