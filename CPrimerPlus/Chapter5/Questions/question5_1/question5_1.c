// Calculate value of x and y variables in each of the following expressions
// Assume these variables type is int
#include <stdio.h>
int main(void){
  int x = 7/2;
  printf("Question1:\n");
  printf("Calculate the value of x and y variable in all the following expressions\n");
  printf("Assume they are of the int type:\n");
  printf("a) x = (2 + 3) * 6\nA: 30, R: %d\n", (2 + 3) * 6);
  printf("b) x = (12 + 6)/2*3\nA: 27, R: %d\n", (12 + 6)/2*3);
  printf("c) y = x = (2 + 3)/4\nA: 1, R: %d\n", (2 + 3)/4);
  printf("d) y = 3 + 2*(x = 7/2)\nA: 9, R: %d\n", 3 + 2*(x = 7/2));
  return 0;
}
