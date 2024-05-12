/* Design a function min(x, y) which returns smaller from two values of the
  double type. Test it with the simple program */
#include <stdio.h>
double take_double(void);
double min(double a, double b); /* function declaration */
int main(void) {
  double x, y;
  printf("Input the first floating point value below.\n");
  x = take_double();
  printf("Input the second floating point value below.\n");
  y = take_double();
  printf("The smaller value from %lf and %lf is %lf.\n", x, y, min(x, y));
  return 0;
}
double take_double(void) {
  double value;
  printf("Enter the value: ");
  scanf("%lf", &value);
  return value;
}
double min(double a, double b) {
  if (a > b) {
    return b;
  } else {
    return a; // if a and b are equal it'll return correct value
  }
}
