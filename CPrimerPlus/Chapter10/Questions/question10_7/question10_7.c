// Form the declaration for each of the following variables:
// a) digits is an array of ten integer values
// b) bill is an array of six floating point variables
// c) mate is an array of three arrays which contain five integer variables
// d) wlanc in an pointer to an array with 20 elements
// e) twz is an array of 20 pointers into char type
#include <stdio.h>
int main(void) {
  int digits[10];
  printf("int array: int digits[10]\n");
  float bill[6];
  printf("float array: float bill[6]\n");
  int mate[3][5];
  printf("array of array: int mate[3][5]\n");
  char (*wlanc)[20];
  printf("pointer to array: char (*wlanc)[20]\n");
  char * twz[20];
  printf("array of pointers: char * twz[20]");
  return 0;
}
