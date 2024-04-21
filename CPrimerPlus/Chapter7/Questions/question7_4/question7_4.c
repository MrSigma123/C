/* What is the value of the following expressions? */
#include <stdio.h>
int main(void) {
  int x = 0;
  int y = 0;
  int d;
  printf("a) 5 > 2;                 A: 1,  R: %d\n", 5 > 2);
  printf("b) 3 + 4 > 2 && 3 < 2;    A: 0,  R: %d\n", 3 + 4 > 2 && 3 < 2);
  printf("c) x >= y || y > x;       A: 1,  R: %d\n", x >= y || y > x); // true for any x and y value
  printf("d) d = 5 + ( 6 > 2 );     A: 6,  R: %d\n", d = 5 + ( 6 > 2 ));
  printf("e) 'X' > 'T' ? 10 : 5;    A: 10, R: %d\n", 'X' > 'T' ? 10 : 5);
  printf("f) x > y ? y > x : x > y  A: 0,  R: %d\n", x > y ? y > x : x > y);
  return 0;
}
