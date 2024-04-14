// Calculate value of x variable in each following expression
// Assume it's type is int
#include <stdio.h>
int main(void){
  int x;
  printf("a) x = (int) 3.8 + 3.3\nA: 6, R: %d\n", x = (int) 3.8 + 3.3);
  printf("b) x = (2 + 3) * 10.5\nA: 52, R: %d\n", (int)((2 + 3) * 10.5));
  printf("c) x = 3 / 5 * 22.0\nA: 0, R: %d\n", 3 / 5 * 22.0);
  printf("d) x = 22 * 3/5\nA: 13, R: %d\n", 22 * 3/5);
  return 0;
}
