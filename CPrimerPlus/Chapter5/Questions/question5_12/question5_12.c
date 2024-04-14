// Write statement which will perform the following actions
// (in other words, which will have the following side effects)
#include <stdio.h>
int main(void){
  int x = 0; // starting value
  int a = 1;
  int b = 2;
  int c = 3;
  printf("a) increment variable x by 10: %d\n", x = x + 10);
  printf("b) increment variavle x by 1: %d\n", ++x);
  printf("c) assign to variable c doubled sum of a and b: %d\n", c = 2 * (a + b));
  printf("d) assign to variable c sum of a and doubled b: %d\n", c = a + 2 * b);
  return 0;
}
