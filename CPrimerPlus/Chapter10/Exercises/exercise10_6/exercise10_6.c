/*
Write a function which reverts the order of the elements in an double type
array. Test this function in a simple program.
*/
#include <stdio.h>
#define SIZE 10
void revert_array_elements_order(double * array, int size);
void print_double_type_array(double * array, int size);
int main(void)
{
  double array[SIZE];  // random values
  printf("Elements before the reverse:\n");
  print_double_type_array(array, SIZE);
  revert_array_elements_order(array, SIZE);
  printf("\nElements after the reverse:\n");
  print_double_type_array(array, SIZE);
  return 0;
}
void revert_array_elements_order(double * array, int size)
{
  double tmp;
  int i;
  for (i = 0; i < size/2; i++)
  {
    tmp = array[i];
    array[i] = array[size-1-i];
    array[size-1-i] = tmp;
  }
}
void print_double_type_array(double * array, int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("%lf, ", array[i]);
  }
}
