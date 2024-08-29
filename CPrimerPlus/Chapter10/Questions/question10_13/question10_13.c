/*
There are given two function prototypes:

void show(const double arr[], int n);      // n is the number of elements
void show2(const double arr2[][3], int n); // n is the number of rows

a) Present the function call which uses compound literal which includes
  the following values: 8, 3, 9 and 2 to the show() function
b) Present the function call which uses compound literal which includes
  the following values: 8, 3 and 9 as the first row and the values
  5, 4 and 1 as the second row into the function show2()
*/
#include <stdio.h>
void show(const double arr[], int n);      // n is the number of elements
void show2(const double arr2[][3], int n); // n is the number of rows
int main(void)
{
  show ((double []) {8, 3, 9, 2}, 4);
  show2 ((double [][3]) { {8, 3, 9}, {5, 4, 1} }, 2);
  return 0;
}
