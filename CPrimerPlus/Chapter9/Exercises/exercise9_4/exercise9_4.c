/* Harmonic average of two numbers is achieved by finding
  the inverted values of these numbers, calculating their
  arithmetic average and calculating the inversion of the
  result. Write a function which takes two double type
  arguments and returns their harmonic average. */
#include <stdio.h>
double harmonic_avg(double value1, double value2); /* function declaration */
int main(void) {
  double val1, val2;
  printf("This program calculates harmonic average of two numbers.\n");
  printf("Enter the first value: ");
  scanf("%lf", &val1);
  printf("Enter the second value: ");
  scanf("%lf", &val2);
  printf("The harmonic average calculated from these numbers is %lf\n", harmonic_avg(val1, val2));
  return 0;
}
double harmonic_avg(double value1, double value2) { /* function definition */
 double inverted_val1, inverted_val2, avg, inverted_avg;
  inverted_val1 = 1 / value1;
  inverted_val2 = 1 / value2;
  avg = (inverted_val1 + inverted_val2) / 2;
  inverted_avg = 1 / avg;
  return inverted_avg;
}
