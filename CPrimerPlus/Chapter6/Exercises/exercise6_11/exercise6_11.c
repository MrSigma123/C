/* Write a program which takes 8 numbers into an array and displays them
  in reverse order */
#include <stdio.h>
#define SIZE 8
int main(void) {
  int i;
  int array[SIZE];
  printf("Enter 8 integer numbers:\n");
  for (i = 0; i < SIZE; i++) // enter the values into an array
    scanf("%d", &array[i]);
  printf("\nHere are your values in reverse order:\n");
  for (i = SIZE - 1; i >=0; i--)
    printf("%d ", array[i]);
  return 0;
}
