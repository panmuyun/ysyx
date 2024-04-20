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

#include <common.h>
#include "monitor/sdb/sdb.h"

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();


int main(int argc, char *argv[]) {

  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif



  int num;
  char expressions[600];
  int linenum=0;

  while(scanf("%d %[^\n]", &num, expressions)!=EOF){
    linenum++;
    printf("line %d : %s\n", linenum, expressions);

    bool success;
    int val = expr(expressions, &success);
    if(num == val){
      printf("line %d : YES!! (%d)\n", linenum, val);
    }else
      printf("line %d : NO-------------------\n", linenum);

  }




  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
