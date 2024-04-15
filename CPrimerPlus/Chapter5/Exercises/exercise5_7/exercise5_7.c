/* Write a program which will take float type value and displays it's cubic value
  onto the screen. To do that use the function mady by yourself which will make the
  cubical value from the initial input value and will display it onto the screen.
  Function main() should pass the input value (as an argument) to your cubic function */
#include <stdio.h>
void cube(float x);
int main(void){
  float input;
  printf("Enter an float value: ");
  scanf("%f", &input);
  cube(input);
  return 0;
}
void cube(float x){
  float pre = x;
  x = x * x * x;  // assing the cubic value to the x variable
  printf("The cubic value of %f is %f\n", pre ,x );
}
