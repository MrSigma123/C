/* simple program written by following the rules in the task, introduction to functions */
#include <stdio.h>
void br(void);
void ic(void);
int main(void){
  br();
  printf(" ");
  ic();
  printf("\n");
  ic();
  printf("\n");
  br();
  printf("\n");
  return 0;
}
void br(void){
  printf("Brasil, Russian.");
}
void ic(void){
  printf("India, China.");
}
