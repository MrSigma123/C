/* What is the value of *ptr and *(ptr + 2) in each case below? */
#include <stdio.h>
void function1(void);
void function2(void);
int main(void) {
  function1();
  function2();
  return 0;
}
void function1(void) {
  int *ptr;
  int array[2][2] = {12, 14, 16};
  ptr = array[0]; // The following code will assign the array address into pointer variable
  printf("Case1:\n");
  printf("%d, %d\n", *ptr, *(ptr + 2));
}
void function2(void) {
  int *ptr;
  int array[2][2] = { {12}, {14,15} };
  ptr = array[0];
  printf("Case2:\n");
  printf("%d, %d\n", *ptr, *(ptr + 2));
}
