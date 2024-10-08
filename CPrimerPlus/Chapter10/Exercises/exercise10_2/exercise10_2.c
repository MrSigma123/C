/*
Write a program which initializes an array and then copies its elements
into two different arrays. (All three arrays should be declared in the main
program). To make the first copy of the array, use a function that uses
offset notation. To make the second copy of the array, use a function
that uses pointer notation along with incrementing the pointers. The first
two functions should take as arguments the source array name,
the destination array name, and the array sizes. The third function should
take the name of the source array, the name of the destination array,
and a pointer to the element after the last element of the source
array. The function calls should look like below:

double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double dest1[5];
double dest2[5];
copy_arr(source, dest1, 5);
copy_ptr(source, dest2, 5);
copy_ptr2(source, dest2, source + 5);
*/
#include <stdio.h>
void copy_arr(double * source, double * dest, int size);
void copy_ptr(double * source, double * dest, int size);
void copy_ptr2(double * source, double * dest, double * pointer);
void print_array(double * pointer, int size);
int main(void)
{
  double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double dest1[5];
  double dest2[5];
  copy_arr(source, dest1, 5);
  copy_ptr(source, dest2, 5);
  copy_ptr2(source, dest2, source + 5);

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
void copy_ptr(double * source, double * dest, int size)
{
  int i;
  printf("\nDestination array before element swap:\n");
  print_array(dest, size);
  for (i = 0; i < size; i++)
  {
    *(dest+i) = *(source+i);
  }
  printf("\nDestination array after element swap:\n");
  print_array(dest, size);

}
void copy_ptr2(double * source, double * dest, double * pointer)
{
  int i;
  printf("\nDestination array before element swap:\n");
  print_array(dest, 5);
  for (i = 0; (source+i) != pointer ; i++)
  {
    *(dest+i) = *(source+i);
  }
  printf("\nDestination array after element swap:\n");
  print_array(dest, 5);
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
