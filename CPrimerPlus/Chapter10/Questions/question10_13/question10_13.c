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
    // a) Corrected function call for show() using a compound literal
    show((double []) {8, 3, 9, 2}, 4);
    
    // b) Corrected function call for show2() using a compound literal
    show2((double [][3]) { {8, 3, 9}, {5, 4, 1} }, 2);
    
    return 0;
}

// Example implementation of show
void show(const double arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

// Example implementation of show2
void show2(const double arr2[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", arr2[i][j]);
        }
        printf("\n");
    }
}
