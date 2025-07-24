/*
  Write a function is_present_in(), which will take two arguments:
  a character and the pointer to the string. The function should
  return non zero value (true) if the string inclule passed
  character. In other case the function should return zero (false).
  Test the function in a simple program, which will test various
  data in a loop.
*/

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 81

int is_present_in(char target, char * arr_address);

int main(void){
  char string[LIMIT];
  char test;

  printf("The program will test various data in search of the"
         "character presence in a string.\n");
  printf("(type empty character [ENTER] in order to stop the program)\n");
  while(1){
    printf("Please enter the character to be tested: ");
    scanf(" %c", &test);
    printf("Please enter the string to be tested: ");
    scanf(" %s", string);

    if (is_present_in(test, string) == 1){
      printf("The test character is present in the string.\n");
    }
    else{
      printf("The test character is not present in the string.\n");
    }
  }
  
  return 0;
}

int is_present_in(char target, char * arr_address){
  
}
