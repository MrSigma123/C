/* Specify which expressions are true and which are false */
#include <stdio.h>
int main(void) {
  printf("a) 100 > 3 && 'a' > 'c'; A: 0, R: %d\n", 100 > 3 && 'a' > 'c');
  printf("b) 100 > 3 || 'a' > 'c'; A: 1, R: %d\n", 100 > 3 || 'a' > 'c');
  printf("c) !(100 > 3); A: 0, R: %d\n", !(100 > 3));
  return 0;
}
