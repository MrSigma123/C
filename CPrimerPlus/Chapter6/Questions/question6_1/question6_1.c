/* Enter the list of the values, which variable miau will receive after
  executing the following lines: */
#include <stdio.h>
int main(void) {
  int miau = 2;
  printf("A: Answer   R: Result\n");
  printf("miau += 5;    A: 7, R: %d\n", miau += 5);
  printf("miau *= 10;   A: 70 R: %d\n", miau *= 10);
  printf("miau -= 6;    A: 64 R: %d\n", miau -= 6);
  printf("miau /= 8;    A: 8  R: %d\n", miau /= 8);
  printf("miau %%= 3;    A: 2  R: %d\n", miau %= 3);
  return 0;
}
