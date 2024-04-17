/* Write the condintion in C which will check if: */
#include <stdio.h>
int main (void) {
  int x = 6;
  int test;
  printf("A: ANSWER, R: RESULT\n");
  printf("a) x is reater than 5; A: x > 5, %d\n", x > 5);
  printf("(Enter 5 %%d value: x)\b\b");
  test = scanf("%d", &x);
  printf("b) scanf() reads unsuccessfully double type variable x;\n"
         "A: scanf(%%lf) == 0, R: %d\n", test == 0);
  printf("c) x has a value of 5; A: x == 5, R: %d\n", x == 5);
  return 0;
}
