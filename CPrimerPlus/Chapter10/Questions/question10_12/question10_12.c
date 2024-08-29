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
void process_t(double * arr, int rows);
void process_t_VLA(int rows, double arr[rows]);
void process_c(short (*arr)[C2], int rows);
void process_c_VLA(int rows, int columns, short arr[rows][columns]);
void process_s(long (*arr)[S2][S3], int rows);
void process_s_VLA(int rows, int columns, int depth, long[rows][columns][depth]);
int main(void)
{
  double t[20];
  short c[10][30];
  long s[5][10][15];
  process_t(t, T);
  process_t_VLA(T, t);
  process_c(c, C1);
  process_c_VLA(C1, C2, c);
  process_s(s, S1);
  process_s_VLA(S1, S2, S3, s);
  return 0;
}
