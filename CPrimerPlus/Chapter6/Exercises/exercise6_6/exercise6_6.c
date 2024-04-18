/* Write a program which will display a table. Each line should include
  an integer value, it's square and it's cube. The lower and upper limit
  of an array should be defined by user. Use for loop. */
#include <stdio.h>
int main(void) {
  int i;
  int value, square, cube;
  int limit_upper, limit_lower;
  printf("This program displays and array of cubes and squares.\n");
  printf("Enter upper and lower limits of the table values:\n");
  printf("Enter the lower value: ");
  scanf("%d", &limit_lower);
  printf("Enter the upper value: ");
  scanf("%d", &limit_upper);
  printf("\n\n  Value     Square        Cube\n");
  for (i = limit_lower; i < limit_upper; i++)
    printf("%5d%11d%13d\n", i, i*i, i*i*i);
  return 0;
}
