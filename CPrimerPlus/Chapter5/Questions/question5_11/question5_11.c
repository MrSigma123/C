#define TEXT "COMPUTER BITES DOG"
#include <stdio.h>
int main(void){
  int n = 0;
  while (n < 5) // infinite loop
    printf("%s\n", TEXT);
    n++; // misleading identation
  printf("That's all.\n");
  return 0;
}
/* This program is constructed not properly,
  misleading identation suggests, that the n++ statement
  should be inluded inside missing curly brackets.
  Because of that this program includes infinite loop
  and has to be stopped manually */
