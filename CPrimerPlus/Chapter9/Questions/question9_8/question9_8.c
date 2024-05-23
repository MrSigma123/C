/* Write a function which returns the greatest from three integer arguments */
#include <stdio.h>

int greatest_from_three(int val1, int val2, int val3);

int main(void) {
  int num1, num2, num3, greatest;
  printf("This program uses function which returns the greatest value from three values.\n");
  printf("Enter first integer value: ");
  scanf("%d", &num1);
  printf("Enter second integer value: ");
  scanf("%d", &num2);
  printf("Enter third integer value: ");
  scanf("%d", &num3);
  greatest = greatest_from_three(num1, num2, num3);
  printf("The greatest value is %d.\n", greatest);
  return 0;
}

int greatest_from_three(int val1, int val2, int val3) {
  int greatest;
  if (val1 > val2) {
    greatest = val1;
  }
  else {
    greatest = val2;
  }
  if (val3 > greatest) {
    greatest = val3;
  }
  return greatest;
}
