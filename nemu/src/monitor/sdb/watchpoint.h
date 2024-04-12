#ifndef __WATCHPOINT_H__
#define __WATCHPOINT_H__

#include <common.h>
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
void watchpoints_display();
WP* watchpoints_check();

#endif



