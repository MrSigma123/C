/* Write and check the function named greater_than() which changes
  the value of both values of the double type to the greater one of
  the value of greater one of them. */
#include <stdio.h>  
void greater_than(double * val1, double * val2); /* function prototype */
int main(void)  {
  double value1,  value2;
  printf("This program uses a function which replaces the input values\n");
  printf("with the greater one of both given values. It uses pointers.\n");
  printf("Enter the first value: ");
  scanf("%lf", &value1);
  printf("Enter the second value: ");
  scanf("%lf", &value2);
  printf("OK. The values given by you are:\n");
  printf("Value1: %lf and Value2: %lf\n", value1, value2);
  greater_than(&value1, &value2);
  printf("After the function call the values are:\n");
  printf("Value1: %lf and Value2: %lf\n", value1, value2);
  return 0;
}
void greater_than(double * val1, double * val2) {
  if (*val1 > *val2) {
    *val2 = *val1;
  } else {
    *val1 = *val2;
  }
}
