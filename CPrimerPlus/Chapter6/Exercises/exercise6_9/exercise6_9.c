/* Modify exercise6_8 solution by adding the calculation process
  in separate function */
#include <stdio.h>
double calculation(double x, double y);
int main(void) {
  double value1, value2;

  printf("Enter each time two double type values (or any letter to quit): \n");
  while (scanf("%lf%lf", &value1, &value2) == 2) {
    calculation(value1, value2);
  } 

  return 0;
}
double calculation(double x, double y) {
  double difference;
  double product;
  double result;

  difference = x - y;
  product = x * y;
  result = difference / product;
  printf("(x - y) / (x * y) = %lf\n\n", result);
  
  return result;
}
