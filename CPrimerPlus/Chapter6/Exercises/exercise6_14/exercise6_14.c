/* Write a program which creates two 8-element array of the
  double type and uses a loop to allow the user enter the
  values to the first one array. Than the program should
  put to the second array cumulated sums consisted from the
  elements from the first array. In example, the fourth
  element from the second array should be equal to the sum
  of the first four elements from the first array, fifth
  element from the second array should be equal to the sum
  of the first five elements from the first array, and so on.
  (You can achieve that by using nested loops or single loop by
   knowing that the fifth element from the second array is equal
   to the sum of the fourth element from the second array and 
   fifth element from the first array). Use also another loop to
  display the values from both arrays in a way to display first
  array above the second array which represents the cumulated sums. */
#include <stdio.h>
#define SIZE 8
int main(void) {
  int i, j;
  int limiter;
  double array1[SIZE], array2[SIZE];
  printf("Enter 8 double values into the first array:\n");
  for (i = 0; i < SIZE; i++) // assign values into the first array
    scanf("%lf", &array1[i]);
  for (i = 0; i < SIZE; i++) {
    limiter = i;
    array2[i] = 0;
    for (j = 0; j <= limiter; j++)
      array2[i] += array1[j];
  }
  printf("These are the values of these two arrays:\n");
  for (i = 0; i < SIZE; i++)  // printing the values from the first array
    printf("%9lf ", array1[i]);
  printf("\n");
  for (i = 0; i < SIZE; i++) 
    printf("%9lf " , array2[i]);
  printf("\n");
  return 0;
}
