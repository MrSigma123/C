/*
Write a program that declares a 3x5 integer array with some initial data, 
displays the values, doubles the values, and then displays the new values. 
Displaying and doubling the values should be executed by two separate 
functions, which take the array name and its number of rows as arguments.
*/
#include <stdio.h>
#define ROWS 3
#define COLUMNS 5
void display_2d_array(int array[][COLUMNS], int rows);
void double_2d_array(int array[][COLUMNS], int rows);
int main(void)
{
  int array[ROWS][COLUMNS] = {
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15}
  };
  return 0;
}
void display_2d_array(int array[][COLUMNS], int rows)
{
  int i, j;
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < COLUMNS; j++)
    {
      if (i !=  - 1)
        printf("%d, ", array[i][j]);
      else
        printf("%d", array[i][j]);
    }
  }
}
void double_2d_array(int array[][COLUMNS], int rows)
{
  int i, j;
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < COLUMNS; j++)
    {
      array[i][j] *= 2;
    }
  }
}
