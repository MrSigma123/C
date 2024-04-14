/* simple program, which involves functions, which call each other */
#include <stdio.h>
void one_three(void);
void two();
int main(void){
  printf("Let's begin...\n");
  one_three();
  printf("The end!\n");
  return 0;
}
void one_three(void){
  printf("one\n");
  two();
  printf("three\n");
}
void two(void){
  printf("two\n");
}
