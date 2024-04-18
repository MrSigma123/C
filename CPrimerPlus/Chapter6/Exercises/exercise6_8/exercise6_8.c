/* Write a program which takes two floating point numbers and displays
  a value of their difference divided by their product. Program should
  read another pairs of input data up to the moment when the user will
  enter a non digit value. */
#include <stdio.h>
int main(void) {
  double value1, value2;
  double difference;
  double product;
  double calculation;
  
  printf("Enter two double type values: \n");
    //scanf("%lf%lf", &value1, &value2);
  while (scanf("%lf%lf", &value1, &value2)) {
    difference = value1 - value2;
    product = value1 * value2;
    calculation = difference / product;
    printf("(value1 - value2) / (value1 * value2) = %lf\n\n", calculation);
    printf("Enter two double type values: \n");
  }
  return 0;
}
