/*
Use the copying function from exercise10_2 to copy the following elements
from an array. Copy the elements from the third to the fifth element of
an array that has 7 elements. The elements should be placed into another
three-element array. The function itself doesn't need to be modified;
what's necessary is choosing the right function arguments. (The arguments
don't have to be the array name and its size—it's equally correct to pass
the address of a specific element and the number of elements to be copied).
*/
#include <stdio.h>
void copy_arr(double * source, double * dest, int size);
void print_array(double * pointer, int size);
int main(void)
{
  double array[7] = {1,2,3,4,5,6,7};
  double three_element_copy[3]; // uninitialized
  copy_arr(array+2, three_element_copy, 3);
  return 0;
}
void copy_arr(double * source, double * dest, int size)
{
  int i;
  printf("Destination array before element swap:\n");
  print_array(dest, size);
  for (i = 0; i < size; i++)
  {
    dest[i] = source[i];
  }
  printf("\nDestination array after element swap:\n");
  print_array(dest, size);
}
void print_array(double * pointer, int size)
{
  int i;
  printf("Array elements: ");
  for (i = 0; i < size; i++)
  {
    printf("%lf, ", *(pointer+i));
  }
  printf("\n");
}
