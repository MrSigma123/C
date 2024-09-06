/*
Write a function that assigns to each element of the third array the sum of the 
corresponding elements from two other arrays. (For example, if array1 has the 
values 2, 4, 5, and 8, and array2 has the values 1, 0, 4, and 6, the function 
should assign to the third array the values 3, 4, 9, and 14.) The function 
should take three array names and their size as arguments. Test this function 
in a simple program.
*/
#include <stdio.h>
#define SIZE 10
void sum_two_1d_arrays_elements_into_third(int * array1, int * array2,
                                        int * array3, int size);
void print_1d_array(int * array, int size);
int main(void)
{
  int array1[SIZE] = {1,2,3,4,5,6,7,8,9,10};
  int array2[SIZE] = {10,9,8,7,6,5,4,3,2,1};
  int array3[SIZE] = {0}; // initialized with zeros
  sum_two_1d_arrays_elements_into_third(array1, array2, array3, SIZE);
  printf("The array 3 elements after summation:\n");
  print_1d_array(array3, SIZE);
  return 0;
}
void sum_two_1d_arrays_elements_into_third(int * array1, int * array2,
                                        int * array3, int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    array3[i] = array1[i] + array2[i];
  }
}
void print_1d_array(int * array, int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    if (i != size - 1)
      printf("%d, ", array[i]);
    else
      printf("%d", array[i]);
  }
  printf("\n");
}
