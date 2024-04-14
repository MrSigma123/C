// Write a program, which takes the floating point number and then prints it in the fractional format and exponent format.
// The printed text should look like the following:
// a) Entered number 21.3 or 2.1e+001
// e) Entered number +21.290 or 2.129E+001
#include <stdio.h>
#include <stdlib.h>
int main(void){
  float number;
  printf("Enter the number: ");
  scanf("%f", &number);
  printf("Entered number %+g or %.3E", number, number);
  return 0;
}
