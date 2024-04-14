// Write a program, which will ask about your name, and next about your surname
// after that the program prints it in the format Surname and Name
#include <stdio.h>
#include <stdlib.h>
int main(void){
  char name[15];
  char surname[25];
  printf("Enter your name: ");
  scanf("%s", name);
  printf("Enter your surname: ");
  scanf("%s", surname);
  printf("Your full name is %s %s", surname, name);
  return 0;
}
