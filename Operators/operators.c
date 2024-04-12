// describing C programming operators
#include <stdio.h>
int main(void){
  // Basic mathematical opetatirs, such as + - * /
  int value1 = 125;
  int value2 = 5;
  int addition = value1 + value2;
  int subtraction = value1 - value2;
  int multiplication = value1 * value2;
  int division = value1 / value2;
  printf("The variable1 stores the value = %d\n", value1);
  printf("The variable2 stores the value = %d\n", value2);
  printf("%d + %d = %d\n", value1, value2, value1 + value2);
  printf("%d - %d = %d\n", value1, value2, value1 - value2);
  printf("%d * %d = %d\n", value1, value2, value1 * value2);
  printf("%d / %d = %d\n", value1, value2, value1 / value2);
  return 0;
}
