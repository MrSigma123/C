/* 
a) Declare an array of 6 integer numbers and assign to it the values
  1, 2, 4, 8, 16, 32.
b) Show by using pointer notation the third element (the value of 4)
  of the array from a)
c) Assume that there are applied the C99 (or C11) Standard rules, declare
  an array of 100 integer elements in such way that the last element will
  have the value of -1. Don't worry about the other elements
d) Assume that there are applied the C99 (or C11) Standard rules, declare
  an array of 100 integer elements in such way that the elements
  5., 10., 11., 12. and 3. will have the value of 101. Don't worry about
  the remaining elements
*/
#include <stdio.h>
int main(void)
{
  int array[6] = {1, 2, 4, 8, 16, 32};
  int i;
  printf("array: ");
  for (i = 0; i < 6; i++)
  {
    printf("%d, ", array[i]);
  }
  printf("\n");
  printf("*(array + 2) = %d\n", *(array + 2));
  int new_array[100] = {new_array[99] = -1};
  printf("new_array[99] = %d\n", new_array[99]);
  int newest_array[100] = {
    newest_array[5] = 101,
    newest_array[10] = 101,
    newest_array[11] = 101,
    newest_array[12] = 101,
    newest_array[3] = 101,
  };
  printf("newest_array[5] = %d\n", newest_array[5]);
  printf("newest_array[10] = %d\n", newest_array[10]);
  printf("newest_array[11] = %d\n", newest_array[11]);
  printf("newest_array[12] = %d\n", newest_array[12]);
  printf("newest_array[3] = %d", newest_array[3]);
  return 0;
}
