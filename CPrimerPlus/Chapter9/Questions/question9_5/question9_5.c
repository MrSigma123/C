/* What changes (if any) you have to make in order to make
  the code from question9_4 to operate on two double type
  values ?*/
#include <stdio.h>
double sum_two_double(double val1, double val2); // changed the parameters type and function type
int main(void) {
  double num1, num2; // changed the arguments type
  printf("This program uses the function which sums two floating point numbers.\n"); // double type
  printf("Enter the first floating point value: ");
  scanf("%lf", &num1);
  printf("Enter the second floating point value: ");
  scanf("%lf", &num2);
  printf("The result of the sum of these two numbers is %lf.\n",
         sum_two_double(num1, num2)); // function call
}
double sum_two_double(double val1, double val2) { // changed the arguments type and function type
  double sum = 0;
  sum = val1 + val2;
  return sum;
}

