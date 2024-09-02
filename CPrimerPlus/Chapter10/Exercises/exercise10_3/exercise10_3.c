/*
Write a function which returns the greatest value stored in the array.
Test this function in a simple program.
*/
#include <stdio.h>
#define SIZE 10
int find_greatest_val(int * arr, int size);
int main(void)
{
  int array[] = {2,3,7,1,4,9,0,5,6,8};
  printf("The greatest value in an array is %d", find_greatest_val(array, SIZE));
  return 0;
}
int find_greatest_val(int * arr, int size)
{
  int i;
  int greatest = arr[0];
  for (i = 1; i < size; i++)
  {
    if (arr[i] > greatest) greatest = arr[i];
  }
  return greatest;
}
