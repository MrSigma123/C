/* What is the value of **ptr and **(ptr + 1) in each following case? */
#include <stdio.h>
void case1 (void);
void case2 (void);
int main(void) {
  case1();
  case2();
  return 0;
}
void case1 (void) {
  int (*ptr)[2];
  int array[2][2] = {12, 14, 16};
  ptr = array;
  printf("%d, %d\n", **ptr, **(ptr + 1)); // 12, 16
}
void case2 (void) {
  int (*ptr)[2];
  int array[2][2] = { {12}, {14,16}};
  ptr = array;
  printf("%d, %d\n", **ptr, **(ptr + 1)); // 12, 14
}
