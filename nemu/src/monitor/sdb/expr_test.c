//#include <isa.h>
//#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/vaddr.h>

int main(int argc, char *argv[]) {
  unsigned num;
  char expression[200];
  while(scanf("%u %[^\n]", &num, expression)!=EOF){
    printf("%s\n", expression);
  }
  return 0;

}