/* Do again exercise 8 from that chapter, but this time use the recursive function */

#include <stdio.h>

double pow_recursive(double base, int exponent);

int main(void) {
  double x, xpow;
  int n;

  printf("Enter the value and it's integer power");
  printf(" to rise this value to this power value.\n");
  printf("Enter q, to stop the program.\n");
   while (scanf("%lf%d", &x, &n) == 2) {
    xpow = pow_recursive(x,n);   
    if (x == 0 && n == 0) {
      printf("0 to the power of 0 is undefined. The program will use 1 instead.\n");
      n = 1;
    }
    printf("%.3g to the power of %d is %.5g\n", x, n, xpow);
    printf("Enter next pair of numbers or enter q to end.\n");
  }
  printf("I wish you a nice day!\n");
  return 0;
}

double pow_recursive(double base, int exponent) {
  if (exponent == 0) { /* stopping condition */
    return 1;
  }
  if (exponent >= 1) {
    return base * pow_recursive(base, exponent - 1);
  }
  else {
    return 1/base * pow_recursive(base, exponent + 1);
  }
}
