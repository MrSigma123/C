// Write statements which will perform the following actions
#include <stdio.h>
int main(void){
  int a = 4;
  int b = 2;
  int c = 5;
  int d = 8;
  int x = 1;
  int n = 7;
  int k = 2;
  int q = 1000;
  int p;
  int m;
  printf("a) decrement variable x by one: %d\n", --x);
  printf("b) assign to variable m remainder of dividing n by k: %d\n", m = n % k);
  printf("c) divide q by b minus a and assign the result to variable p: %d\n", p = (q / (b - a)));
  printf("d) assign to variable x result of dividing a and b sum by multiplication of c and d: %d\n", x = (a + b)/(c * d));
  return 0;
}
