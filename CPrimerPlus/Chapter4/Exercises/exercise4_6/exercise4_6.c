// Write a program, which takes the name and surname of the user, after that
// the program should display in the first row the name and surname, and in
// the second row the number of the characters in name and surname.
// Every of the numbers should be placed right below the first letter
// of it's corresponding words, like below:
//    Anne Kliene-Nachtmusik
//    4    17
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
  char name[20], surname[30];
  printf("Enter your name: ");
  scanf(" %s", name);
  printf("Enter your surname: ");
  scanf(" %s", surname);
  printf("%s %s\n", name, surname);
  printf("%-*.d %d\n", strlen(name), strlen(name), strlen(surname));
  return 0;
}
