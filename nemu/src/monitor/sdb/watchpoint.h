#include "common.h"
#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  char *What;
  word_t Newval;
  word_t Oldval;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

// static WP wp_pool[NR_WP] = {};
// static WP *head = NULL, *free_ = NULL;
/*  head：用于组织使用中的监视点结构
    free_：用于组织空闲的监视点结构   */

WP* new_wp(char *e);
void free_wp(WP *wp);

void init_wp_pool();

// WP* new_wp(char *e){
//   WP *re=NULL;
//   if(free_==NULL)
//     Assert(0, "no available watchpoint");
//   else{
//     re = free_;
//     re->What = e;
//     bool success;
//     re->Oldval = expr(e, &success);
//     free_ = free_->next;
//     //处理head链表
//     re->next=NULL;
//     if (head==NULL)
//       head=re;
//     else{
//       WP *p = head;
//       while(p->next != NULL)
//         p = p->next;
//       p->next = re;
//     }
//   }
//   return re;
// }

// void free_wp(WP *wp){
//   //处理head链表
//   if(wp==head){ 
//     head=NULL;
//   }else{
//     WP *p = head;
//     while(p->next != wp){
//       p = p->next;
//     }
//     p->next = wp->next;
//   }
//   //处理free_链表
//   wp->What='\0';
//   wp->next = NULL;
//   if(free_ == NULL)
//     free_ = wp;
//   else{
//     WP *p = free_;
//     while(p->next != NULL)
//       p = p->next;
//     p->next = wp;
//   }
  
// }

// void init_wp_pool() {
//   int i;
//   for (i = 0; i < NR_WP; i ++) {
//     wp_pool[i].NO = i;
//     wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
//   }

//   head = NULL;
//   free_ = wp_pool;
// }