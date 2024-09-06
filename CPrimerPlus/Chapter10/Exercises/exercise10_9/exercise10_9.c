/*
Write a program which initialize two-dimensional array which size is 3*5 and
which stores the double type elements and uses the VLA function to copy the
data into another two-dimensional array. Write also another VLA using function
which allows for displaying the content of the both arrays. The functions
should operate on N*M arrays. (If your compiler doesn't allow for VLA arrays
use instead traditional C programming ways and do the exercise for N*5 array).
*/
#include <stdio.h>
#define ROWS 3
#define COLUMNS 5
void copy_2d_array_VLA(int rows, int columns, const double source[rows][columns],
                    double destination[rows][columns]);
void print_2d_array(double array[][COLUMNS], int rows, int columns);
int main(void)
{
  double array[ROWS][COLUMNS] = {
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15}
  };
  double copied_array[ROWS][COLUMNS] = {0}; // initialized with zeros
  
  printf("The source array elements:\n");
  print_2d_array(array, ROWS, COLUMNS);
  printf("\nThe destination array elements:\n");
  print_2d_array(copied_array, ROWS, COLUMNS);
  copy_2d_array_VLA(ROWS, COLUMNS, array, copied_array);
  printf("\nThe destination array elements after the copying:\n");
  print_2d_array(copied_array, ROWS, COLUMNS);
  
  return 0;
}
void copy_2d_array_VLA(int rows, int columns, const double source[rows][columns],
               double destination[rows][columns])
{
  int i, j;
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < columns; j++)
    {
      destination[i][j] = source[i][j];
    }
  }
}
void print_2d_array(double array[][COLUMNS], int rows, int columns)
{
  int i, j;
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < columns; j++)
    {
      printf("%9lf, ", array[i][j]);
    }
    printf("\n");
  }
}
