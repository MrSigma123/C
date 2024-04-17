/* Write a program which creates array of 26 elemens and
  writes to it's data cells 26 lowercase letters and then
  displays it's value */
#include <stdio.h>
#define SIZE 26 
int main(void) {
  char array[SIZE];
  int i;
  printf("Enter 26 characters:\n");
  for (i = 0; i < SIZE; i++)      // scan characters
       scanf("%c", &array[i]);
  for (i = 0; i < SIZE; i++)      // display characters
       printf("%c\n", array[i]);
  printf("You have entered %d characters\n", i);
  return 0;
}
