// Calculate the expressions below
#include <stdio.h>
int main(void){
  printf("a) 30.0 / 4.0 * 5.0\n  A: 37.5, R: %lf\n", 30.0 / 4.0 * 5.0);
  printf("b) 30.0 / (4.0 * 5.0)\n  A: 1.5, R: %lf\n", 30.0 / (4.0 * 5.0));
  printf("c) 30 / 4 * 5\n  A: 35, R: %d\n", 30 / 4 * 5);
  printf("d) 30 * 5 / 4\n  A: 37, R: %d\n", 30 * 5 / 4);
  printf("e) 30 / 4.0 * 5\n  A: 37.5, R: %lf\n", 30 / 4.0 * 5);
  printf("f) 30 / 4 * 5.0\n  A: 35, R: %lf\n", 30 / 4 * 5.0);
  return 0;
}
