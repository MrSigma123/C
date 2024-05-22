/* Design the function change() which takes two variables of int type
  named x and y and assign to them the value of their sum and difference */
#include <stdio.h>

void change(int * x, int * y);

int main(void) {
  int val1, val2;
  printf("This program uses function which assigns two given values sum and difference.\n");
  printf("Enter the first integer value: ");
  scanf("%d", &val1);
  printf("Enter the second integer value: ");
  scanf("%d", &val2);
  change(&val1, &val2);

  printf("The results of function change() are:\n");
  printf("val1: %d\n", val1);
  printf("val2: %d\n", val2);

  return 0;
}

void change(int * x, int * y) {
  int sum = 0;
  int difference = 0;
  sum = *x + *y;
  difference = *x - *y;
  *x = sum;
  *y = difference;
}
