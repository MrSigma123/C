// question10_6
// Let's assume that we have the following declaration
//   int net[30][100]
// a) express the address of the element net[22][56]
// b) express the address of the element net[22][0] in two different ways
// c) express the address of the element net[0][0] in three different ways
#include <stdio.h>
int main(void) {
  int net[30][100];
  int * p1;
  p1 = &net[22][56];
  printf("%p\n", p1);
  int * p2;
  p2 = &net[22][0];
  printf("%p\n", p2);
  printf("%p\n", p2);
  p2 = net[22];
  int * p3;
  p3 = &net[0][0];
  printf("%p\n", p3);
  p3 = net[0];
  printf("%p\n", p3);
  p3 = *net;
  printf("%p\n", p3);
  return 0;
}
