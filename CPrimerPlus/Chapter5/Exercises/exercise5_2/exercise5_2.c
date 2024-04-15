/* Write a program which asks for giving an intiger number and then
  displays all integer numbers from that value to the value greater by 10
  (included). (Thus if the value 5 is entered the program will display
  values from 5 to 15). Remember about grouping the output data by spaces
  or newline characters. */
#include <stdio.h>
int main(void){
  int value;
  int tmp;
  printf("The program will print all integer numbers from that value\n"
        "up to the value greater by 10 from input value.\n"
         "Enter the integer value: ");
  scanf("%d", &value);
  tmp = value;
  while (tmp < value + 11)
    printf("%d ", tmp++);
  return 0;
}
