// What this program will display?
#include <stdio.h>
#define FORMAT "%s is a string\n"
int main(void){
  int num = 0;

  printf(FORMAT,FORMAT);
  printf("%d\n", ++num);
  printf("%d\n", num++);
  printf("%d\n", num--);
  printf("%d\n", num);
  return 0;
}
/* This program will display:
  %s is a string
   is a string
  1
  1
  2
  1 */
