/* Write a program which will take lower and upper limit of certain
   range. Then the program should calculate the sum of all squares
   from the integer numbers present in the range, beginning from
   the square of the smallest one value to the greatest one value.
   Program should ask in each cycle about the range limits and
   display the reslut unless the limits values will be the same
   or the upper limit value will be smaller than the lower limit value. */
#include <stdio.h>
int power_of_two(int value);
int main(void) {
  int limit_lower, limit_upper, i, j;
  int sum_square ;
  printf("This program displays the sum of the squares of input integers.\n");
  printf("Enter the lower limit value: ");
  scanf("%d", &limit_lower);
  printf("Enter the upper limit value: ");
  scanf("%d", &limit_upper);
  while (limit_upper > limit_lower) {
    sum_square = 0;
    for (i = limit_lower; i <= limit_upper; i++)
      sum_square += power_of_two(i);
    printf("Sum of the squares from %d to %d is equal to %d\n\n",
           limit_lower, limit_upper, sum_square);
    printf("This program displays the sum of the squares of input integers.\n");
    printf("Enter the lower limit value: ");
    scanf("%d", &limit_lower);
    printf("Enter the upper limit value: ");
    scanf("%d", &limit_upper);
  }
}
int power_of_two(int value) {
  return value * value;
}
