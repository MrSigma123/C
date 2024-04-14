// write a program, which assigns to double type variavle value 1.0/3.0,
// and to the type float 1.0/3.0. Every result has to be displayed three times,
// one time only 4 digits from the right have to be displayed,
// second time 12, third time 16. Program shoud include the float.h header
// and should display FLT_DIG and DBL_DIG. Are printed values 1.0/3.0 alligned
// with mentioned values?
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
int main(void){
  double dbl = 1.0/3.0;
  float fl = 1.0/3.0;
  printf("double -> %.4lf, %.12lf, %.12lf\n", dbl, dbl, dbl);
  printf("float ->%.4f, %.12f, %.16f\n", fl, fl, fl);
  printf("FLT_DIG = %f, DBL_DIG = %lf\n", fl, dbl);
}
