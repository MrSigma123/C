/*
Write a function which returns the difference between the greatest and
the smallest elements stored in an array. Test that function in a simple
program.
*/
#include <stdio.h>
#define SIZE 10
int difference_btw_max_min(int * array, int size);
int main(void)
{
  int array[SIZE] = {2,4,6,8,10,12,14,16,18,20};
  printf("The difference between the max and min is %d.\n",
         difference_btw_max_min(array, SIZE));
  return 0;
}
int difference_btw_max_min(int * array, int size)
{
  int i, diff;
  int max = array[0];
  int min = array[0];
  for (i = 1; i < size; i++)
  {
    if (array[i] < min) min = array[i];
    if (array[i] > max) max = array[i];
  }
  diff = max - min;
  return diff;
}
