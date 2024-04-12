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

#include "watchpoint.h"


static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
// /*  head：用于组织使用中的监视点结构
//     free_：用于组织空闲的监视点结构   */

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(char *e){
  WP *re=NULL;
  if(free_==NULL)
    Assert(0, "no available watchpoint");
  else{
    re = free_;
    strcpy(re->What, e);
    bool success;
    re->Oldval = expr(e, &success);
    free_ = free_->next;
    //处理head链表
    re->next=NULL;
    if (head==NULL)
      head=re;
    else{
      WP *p = head;
      while(p->next != NULL)
        p = p->next;
      p->next = re;
    }
  }
  return re;
}

void free_wp(WP *wp){
  //处理head链表
  if(wp==head){ 
    head=NULL;
  }else{
    WP *p = head;
    while(p->next != wp){
      p = p->next;
    }
    p->next = wp->next;
  }
  //处理free_链表
  strcpy(wp->What, "\0");
  wp->next = NULL;
  if(free_ == NULL)
    free_ = wp;
  else{
    WP *p = free_;
    while(p->next != NULL)
      p = p->next;
    p->next = wp;
  }
  
}

void watchpoints_display(){
  WP *p = head;
  printf("NO\tExpr\t\tOld value\n");
  while (p != NULL){
    printf("%d\t%s\t\t0x%08x\n", p->NO, p->What, p->Oldval);
    p = p->next;
  }
}

bool watchpoints_hit(){
  WP *p = head;
  while (p != NULL){
    bool success;
    p->Newval = expr(p->What, &success);
    if(p->Newval != p->Oldval){
      p->Oldval = p->Newval; 
      Log("Hit watchpoint %d : %s ", p->NO, p->What);//at address 0x%08x
      break;     
    }
    p = p->next;
  }
  if(p!=NULL)
    return true;
  else
    return false;
}

