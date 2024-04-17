/* Define a function which takes integer value and returns it's square */
#include <stdio.h>
int square(int x);
int main(void) {
  int x;
  printf("Enter the value to rise it to the power of two: ");
  scanf("%d", &x);
  printf("The square of %d is %d\n", x, square(x));
  return 0;
}
int square(int x) {
  x *= x;
  return x;
}
