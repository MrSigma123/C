/*
Write a program which initialize two-dimensional array which size is 3*5 and
which stores the double type elements and uses the VLA function to copy the
data into another two-dimensional array. Write also another VLA using function
which allows for displaying the content of the both arrays. The functions
should operate on N*M arrays. (If your compiler doesn't allow for VLA arrays
use instead traditional C programming ways and do the exercise for N*5 array).
*/
#include <stdio.h>
void double_VLA_array_copy(int size1, int size2, double * source,
                                double * destination);
void print_VLA_2d_array(int size1, int size2, double * source);
int main(void)
{
  double array[3][5] = {
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15}
  };
  int size1, size2;
  double * copied_array;
  printf("Enter the size of the array.\n");
  printf("Dimention1 size: ");
  scanf("%d", &size1);
  printf("Dimention2 size: ");
  scanf("%d", &size2);
  double_VLA_array_copy(size1, size2, array, copied_array);
  print_VLA_2d_array(size1, size2, copied_array);
  return 0;
}
void double_VLA_array_copy(int size1, int size2, double * source,
                                double * destination)
{
  double * new_array[size1][size2];
  int i, j;
  int k = 0;
  for (i = 0; i < size1; i++)
  {
    for (j = 0; j < size2; j++)
    {
      new_array[i][j] = source+k++;
    }
  }
}
void print_VLA_2d_array(int size1, int size2, double * source)
{
  int i, j;
  int k = 0;
  for (i = 0; i < size1; i++)
  {
    for (j = 0; j < size2; j++)
    {
      printf("%lf", *(source+k++));
    }
    printf("\n");
  }
}
