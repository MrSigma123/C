// What the following program will display?
#include <stdio.h>
int main(void){
  char c1, c2;
  int difference;
  float num;

  c1 = 'D';
  c2 = 'A';
  difference = c1 - c2;
  num = difference;
  printf("%c%c%c:%d %3.2f\n", c1, c2, c1, difference, num);
  return 0;
}
/* The output will be as follows:
   DAD:3 3.00 */
