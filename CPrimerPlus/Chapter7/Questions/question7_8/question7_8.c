/* What the following program will display? */
#include <stdio.h>
int main(void) {
  int age = 20;
  while (age++ <= 65) {
    if ((age % 20) == 0)  /* is age multiple of 20 ? */
      printf("You are %d years old. You are getting a raise.\n", age);
    if (age = 65)
      printf("You are %d years old. You are getting brand new gold watch.\n", age);
  }
  return 0;
}
