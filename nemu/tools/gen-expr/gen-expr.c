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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  int result = %s; "
"  printf(\"%%d\", result); "
"  return 0; "
"}";

static void gen_rand_expr(int depth) {
  if (rand() & 1){
    strcat(buf, " "); //随机插入空格
  }
  if(depth > 10){
    char num_str[16];
    unsigned num = rand()%1000+1;
    snprintf(num_str, sizeof(num_str), "%u", num);
    //printf("randnum = %s\n", num);
    strcat( buf, num_str );
  }else{
    int choose = rand() % 3;
    switch (choose)
    {
      case 0:
        gen_rand_expr(depth+1);
        int op_choose = rand() % 4;
        //printf("op_choose = %d\n", op_choose);
        switch (op_choose){
          case 0:
            strcat(buf, "+");
            break;
          case 1:
            strcat(buf, "-");
            break;
          case 2:
            strcat(buf, "*");
            break;
          case 3:
            strcat(buf, "/");
            break;
          default:
            printf("missing op!!!\n");
            break;
        }
        gen_rand_expr(depth+1);
        break;
      case 1:
        strcat(buf, "(");
        gen_rand_expr(depth+1);
        strcat(buf, ")");
        break;
      default:
        char num_str[16];
        unsigned num = rand()%1000+1;
        snprintf(num_str, sizeof(num_str), "%d", num);
        //printf("randnum = %s\n", num);
        strcat( buf, num_str );
        break;
    }
  }

}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf[0] = '\0';
    gen_rand_expr(0);

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc -Werror /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
