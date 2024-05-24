/* Write a function which takes three double type addresses and
  assigns the smallest one from these values under the first address,
  the middle value under the second and the greatest value under
  the third address. */

#include <stdio.h>
void sort_three_addresses(double * address1, double * address2, double * address3);
int main(void) {
  double value1, value2, value3;

  printf("This program uses function which sorts three values.\n");
  printf("Enter the first value of double type: ");
  scanf("%lf", &value1);
  printf("Enter the second value of double type: ");
  scanf("%lf", &value2);
  printf("Enter the third value of double type: ");
  scanf("%lf", &value3);

  sort_three_addresses(&value1, &value2, &value3);

  printf("Now under the first address is: %lf.\n", value1);
  printf("Now under the second address is: %lf.\n", value2);
  printf("Now under the third address is: %lf.\n", value3);

  return 0;

}
void sort_three_addresses(double * address1, double * address2, double * address3) {

}
