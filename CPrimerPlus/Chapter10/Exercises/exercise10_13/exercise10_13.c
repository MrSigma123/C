/*
Write a program that asks the user to enter three sets, each consisting of 
five double-type values, and then:

a) Stores these data in a 3x5 array  
b) Calculates the average for each individual set  
c) Calculates the average for all the values combined  
d) Finds the greatest value from the 15 values  
e) Displays the results  

Each of these tasks should be executed by a separate function that uses the 
standard C array approach. Complete task b) using a function that calculates 
and returns the average of a one-dimensional array. Use a loop to call this 
function three times. The other tasks should take the entire array as an 
argument, and tasks c) and d) should return the result to the calling program. 
You don't need to worry about verifying the user's input — assume the user will 
enter the data correctly.
*/
#include <stdio.h>
#define SIZE1 3
#define SIZE2 5
void define_2d_array(int array[][SIZE2], int size1);
double avg_of_1d_array(int array[], int size);
double avg_of_2d_array(int array[][SIZE2], int size1);
int main(void)
{
  int array[SIZE1][SIZE2] = {0}; // initialized with zeros
  define_2d_array(array, SIZE1);
  return 0;
}
void define_2d_array(int array[][SIZE2], int size1)
{
  int i, j;
  for (i = 0; i < size1; i++)
  {
    for (j = 0; j < SIZE2; j++)
    {
      scanf("%d", &array[i][j]);
    }
  }
}
double avg_of_1d_array(int array[], int size)
{
  double avg = 0.0;
  int sum = 0;
  int i;
  for (i = 0; i < size; i++)
  {
    sum += array[i];
  }
  avg = (double)sum / i;
  return avg;
}
double avg_of_2d_array(int array[][SIZE2], int size1)
{
  double avg = 0.0;
  int sum = 0;
  int i, j;
  for (i = 0; i < size1; i++)
  {
    for (j = 0; j < SIZE2; j++)
    {
      sum += array[i][j];
    }
  }
  avg = (double)sum / (i * j);
  return avg;
}
