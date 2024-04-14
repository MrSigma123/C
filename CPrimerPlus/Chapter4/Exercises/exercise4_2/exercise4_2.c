// Write a program, which asks about your name and then
// prints it between quotation marks
// prints it in field of the width of 20 characters, whole fiels should be between quotation marks
// prints it in left side of the field of the width of 20, whole field between quotation marks
// prints it inside the field three characters longer than the name
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
  char name[25];
  printf("Enter your name: ");
  scanf("%s", name);
  printf("\"%s\"\n", name);
  printf("\"%20s\"\n", name);
  printf("\"%-20s\"\n", name);
  printf("\"%*s\"",(int)strlen(name)+3, name);
  return 0;
}
