/*
There are given three folowing declarations

double t[20];
short c[10][30];
long s[5][10][15];

a) Prepare the prototype of the function and the fuction call
  for traditional void function, which process the t array and
  for the function which works on VLA
b) Prepare the prototype of the function and the fuction call
  for traditional void function, which process the c array and
  for the function which works on VLA
c ) Prepare the prototype of the function and the fuction call
  for traditional void function, which process the s array and
  for the function which works on VLA
*/
#include <stdio.h>
#define T 20
#define C1 10
#define C2 30
#define S1 5
#define S2 10
#define S3 15

// Function prototypes

// a) Process t array
void process_t(double *arr, int rows);
void process_t_VLA(int rows, double arr[rows]);

// b) Process c array
void process_c(short (*arr)[C2], int rows);
void process_c_VLA(int rows, int columns, short arr[rows][columns]);

// c) Process s array
void process_s(long (*arr)[S2][S3], int rows);
void process_s_VLA(int rows, int columns, int depth, long arr[rows][columns][depth]);

int main(void)
{
    double t[20];
    short c[10][30];
    long s[5][10][15];
    
    // a) Call functions for t array
    process_t(t, T);
    process_t_VLA(T, t);
    
    // b) Call functions for c array
    process_c(c, C1);
    process_c_VLA(C1, C2, c);
    
    // c) Call functions for s array
    process_s(s, S1);
    process_s_VLA(S1, S2, S3, s);
    
    return 0;
}

// Example implementations of the functions (can be customized)
void process_t(double *arr, int rows) {
    // Process the 1D array
}

void process_t_VLA(int rows, double arr[rows]) {
    // Process the 1D array using VLA
}

void process_c(short (*arr)[C2], int rows) {
    // Process the 2D array with fixed-size columns
}

void process_c_VLA(int rows, int columns, short arr[rows][columns]) {
    // Process the 2D array using VLA
}

void process_s(long (*arr)[S2][S3], int rows) {
    // Process the 3D array with fixed-size dimensions
}

void process_s_VLA(int rows, int columns, int depth, long arr[rows][columns][depth]) {
    // Process the 3D array using VLA
}
