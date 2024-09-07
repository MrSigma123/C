/*
Do exercise10_13 once again but with the usage of variable length arrays
argumemts.
*/
/*
(Here is the code from the previous exercise to be modified)
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
void define_2d_array(int size1, int size2, double array[size1][size2]);     // void define_2d_array(double array[][SIZE2], int size1);
double avg_of_1d_array(int size, double array[size]);                       // double avg_of_1d_array(double array[], int size);
double avg_of_2d_array(int size1, int size2, double array[size1][size2]);   // double avg_of_2d_array(double array[][SIZE2], int size1);
double find_greatest_value_in_2d_array(int size1, int size2, double array[size1][size2]); // double find_greatest_value_in_2d_array(double array[][SIZE2], int size1);
void display_2d_array(int size1, int size2, double array[size1][size2]);     // void display_2d_array(double array[][SIZE2], int size1);
int main(void)
{
  int i;
  double array[SIZE1][SIZE2] = {0}; // initialized with zeros
  
  // function a)
  define_2d_array(SIZE1, SIZE2, array);

  // function b)
  for (i = 0; i < SIZE1; i++)
  {
    printf("The No.%d set average is %lf.\n", i+1, avg_of_1d_array(SIZE2, array[i]));
  }

  // function c)
  printf("\nThe average from the whole array is %lf\n", avg_of_2d_array(SIZE1, SIZE2, array));

  // function d)
  printf("\nThe greatest value in a whole array is %lf.\n", find_greatest_value_in_2d_array(SIZE1, SIZE2, array));
  
  // function e)
  printf("\nHere are the elements stored in the array:\n");
  display_2d_array(SIZE1, SIZE2, array);

  return 0;
}
void define_2d_array(int size1, int size2, double array[size1][size2])
{
  int i, j;
  for (i = 0; i < size1; i++)
  {
    printf("Enter the values for the No.%d set:\n", i+1);
    for (j = 0; j < size2; j++)
    {
      scanf("%lf", &array[i][j]);
    }
  }
  printf("\n");
}
double avg_of_1d_array(int size, double array[size])
{
  double sum = 0.0;
  int i;
  for (i = 0; i < size; i++)
  {
    sum += array[i];
  }
  return sum / size;
}
double avg_of_2d_array(int size1, int size2, double array[size1][size2])
{
  double sum = 0.0;
  int i, j;
  for (i = 0; i < size1; i++)
  {
    for (j = 0; j < size2; j++)
    {
      sum += array[i][j];
    }
  }
  return sum / (size1 * SIZE2);
}
double find_greatest_value_in_2d_array(int size1, int size2, double array[size1][size2])
{
  int i, j;
  double greatest = array[0][0];
  for (i = 0; i < size1; i++)
  {
    for (j = 0; j < size2; j++)
    {
      if (array[i][j] > greatest)
        greatest = array[i][j];
    }
  }
  return greatest;
}
void display_2d_array(int size1, int size2, double array[size1][size2])
{
  int i, j;
  for (i = 0; i < size1; i++)
  {
    for (j = 0; j < size2; j++)
    {
      if (j != SIZE2 - 1)
        printf("%9lf, ", array[i][j]);
      else
        printf("%9lf", array[i][j]);
    }
    printf("\n");
  }
}

