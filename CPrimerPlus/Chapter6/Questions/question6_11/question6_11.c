/* Noe likes counting by two so he wrote the folowing program which
  creates the array and fills it with integer values 2, 4, 6, 8 and so on.
  Is the program correct? If not, what errors are you able to find there? */
#include <stdio.h>
#define SIZE 8
int main(void) {
  int bytwo[SIZE];
  int index;

  for (index = 0; index < SIZE; index++)  // fixed index initialization to 0, fix limiter
    bytwo[index] = 2 * index + 2;
  for (index = 0; index < SIZE; index++) // as above
    printf("%d ", bytwo[index]);           // add missing index reference
  printf("\n");
  return 0;
}
