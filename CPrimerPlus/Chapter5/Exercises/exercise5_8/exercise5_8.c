/* Write program which will display the result of using the modulo operator.
  The user of this program should firstly input the integer number for the second
  operand of the operator, that value will be remembered as a constant value.
  Then the user shoud be able to input a sequence on different values, the program
  should be calculating and displaying their modulo result. The program should stop
  when the user will type 0 or smaller value. The program should be looking somewhat
  like below: 
    It's the program which calculate remainder from division.
    Enter divisor (integer value): 256
    Enter dividend: 438
    438 % 256 is 182
    Enter dividend (<= 0 to exit): 1234567
    1234567 % 256 is 135
    Enter dividend (<= 0 to exit): 0
    End */
#include <stdio.h>
int main(void){
  int divisor, dividend, modulo;
  printf("This is program performing the modulo operation.\n");
  printf("Enter divisor (integer value): ");
  scanf("%d", &divisor);
  const int divisor_const = divisor;
  printf("Enter dividend: ");
  scanf("%d", &dividend);
  while (dividend > 0){
    modulo = dividend % divisor_const;
    printf("%d %% %d is %d\n",
           dividend, divisor_const, modulo);
    printf("Enter dividend (<= 0 to exit): ");
    scanf("%d", &dividend);
  }
  printf("End\n");
  return 0;
}
