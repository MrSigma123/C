/* 
Write a program that initializes a two-dimensional array and copies its
elements into another two-dimensional array using the function from
exercise10_2. (Since a two-dimensional array is an array of arrays,
a one-dimensional copying function can be used for each subarray).
*/
#include <stdio.h>
#define ROWS 4
#define COLUMNS 5
void copy_arr(double * source, double * dest, int size);
void print_array(double * pointer, int size);
int main(void)
{
  double array[ROWS][COLUMNS] = {
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20}
  };
  double copied_array[ROWS][COLUMNS]; // junk values at the beginning
  copy_arr(array, copied_array, ROWS*COLUMNS);
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
