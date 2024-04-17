/* Noe likes counting by two so he wrote the folowing program which
  creates the array and fills it with integer values 2, 4, 6, 8 and so on.
  Is the program correct? If not, what errors are you able to find there? */
#include <stdio.h>
#define SIZE 8
int main(void) {
  int bytwo[SIZE];
  int index;

  for (index = 1; index <= SIZE; index++)
    bytwo[index] = 2 * index;
  for (index = 1;, index <= SIZE; index++)
    printf("%d ", bytwo);
  printf("\n");
  return 0;
}
