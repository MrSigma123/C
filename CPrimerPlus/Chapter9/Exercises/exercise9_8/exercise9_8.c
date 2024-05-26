/* In Chapter6 we wrote the function power() which returned
  the result of rised the value to the natural power. (take
  a look at listing 6.20). Improve that function in a way
  to make it operate with negative powers. Moreover embed
  the assumption that 0 to the power of any number is 0 and
  that rising any number to the power of 0 is equal to 1 (the
  function should inform that 0 to the power of 0 won't work
  and in such case the function will use the value of 1). Use
  the loop. Test that function in a simple program. */

#include <stdio.h>

double power(double a, int b);      /* ANSI prototype */

int main(void) {
  double x, xpow;
  int n;

  printf("Enter the value and it's integer power");
  printf(" to rise this value to this power value.\n");
  printf("Enter q, to stop the program.\n");
  while (scanf("%lf%d", &x, &n) == 2) {
    xpow = power(x,n);   
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

double power(double a, int b) {
  double pow = 1;
  int i;
  
  if (b == 0) { /* include the substitution case for 0 ^ 0 as 0 ^ 1 */
    return 1;
  }
  if (b < 0) {
    for (i = -1; i >= b; i--) {
      pow *= 1/a;
    }
    return pow;
  }
  else {
    for (i = 1; i <= b; i++) {
      pow *= a;
    }
    return pow;
  }
}

