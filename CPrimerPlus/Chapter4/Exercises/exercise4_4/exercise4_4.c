// Write a program, which takes your height in centimeters and your name,
// and then displays it in the following order:
//  Robert, you've got 1.82 meter of height
// Use the floating point type and perform division by using / operator
#include <stdio.h>
#include <stdlib.h>
int main(void){
  float height;
  char name[20];
  printf("Please enter your height in centimeters: ");
  scanf("%f", &height);
  printf("Please enter your name: ");
  scanf("%s", name);
  printf("%s, you've got %.2f meter of height\n", name, height/100);
  return 0;
}
