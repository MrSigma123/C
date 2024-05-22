/* Design a function which returns the sum of two integer numbers */
#include <stdio.h>
int sum_two_int(int val1, int val2); // function prototype
int main(void) {
  int num1, num2;
  printf("This program uses the function which sums two integer numbers.\n");
  printf("Enter the first integer value: ");
  scanf("%d", &num1);
  printf("Enter the second integer value: ");
  scanf("%d", &num2);
  printf("The result of the sum of these two numbers is %d.\n",
         sum_two_int(num1, num2)); // function call
}
int sum_two_int(int val1, int val2) { // function definition
  int sum = 0;
  sum = val1 + val2;
  return sum;
}
