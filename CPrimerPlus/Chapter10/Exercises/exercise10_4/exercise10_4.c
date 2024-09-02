/*
Write a function which returns the index of the greatest value in an array.
Test it in a simple program.
*/
#include <stdio.h>
#define SIZE 12
int find_index_of_greatest_element(int * arr, int size);
int main(void)
{
  int array[] = {0,5,2,4,3,6,9,7,8,10,11,1};
  printf("The greatest element index is %d\n",
         find_index_of_greatest_element(array, SIZE));
  return 0;
}
int find_index_of_greatest_element(int * arr, int size)
{
  int gr_index = 0;
  int i;
  for (i = 1; i < size; i++)
  {
    if (arr[i] > arr[gr_index]) gr_index = i;
  }
  return gr_index;
}
