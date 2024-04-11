#include "common.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  char *What;
  word_t Newval;
  word_t Oldval;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;



WP* new_wp(char *e);
void free_wp(WP *wp);

void init_wp_pool();