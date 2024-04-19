/* Write a program which will create 8-element array filled
  with int type numbers. The program should assign to that
  array first 8 squares of the number 2 and then display
  their values. To assign the values use the for loop and to
  display the values use - for variety - while loop. */
#include <stdio.h>
#define SIZE 8
int main(void) {
  int power_base_two[SIZE];
  int i;
  int exponent = 1; // base value
  for (i = 0; i < SIZE; i++) {
    exponent *= 2;
    power_base_two[i] = exponent;
  }
  i = 0;
  while (i < SIZE) {
    printf("%d ", power_base_two[i]);
    i++;
  }
  printf("\n");
  return 0;
}
