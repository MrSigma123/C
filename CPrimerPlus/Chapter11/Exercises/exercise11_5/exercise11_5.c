/*
  Design a function which will find the first occurence of
  certain character in the first passed argument. In case of
  finding the the character the function should return the
  pointer to that certain character. In onther case the function
  should return the null value. (It's analogically to strchr()
  function. Check that function by using it in simple program,
  which will use a loop to chech several occurences and will pass
  various data into tested function.
*/

#include <stdio.h>
#include <stdlib.h>

char * first_char_occurence(char * string, char target);

int main(void){
  char string[80];
  char character;
  char * result;

  printf("The program will take a word and a test character in a loop\n");
  printf("To stop the loop enter an empty line.\n\n");
 
  while(1){
    printf("Enter a word: ");
    char string[81];
    fgets(string, 80, stdin);

    if(string[0] == '\n'){
    }

    printf("Enter the character to be found: ");
    scanf("%c", &character);
    result = first_char_occurence(string, character);
    if (result == NULL){
      printf("There is any occurecne of the \"%c\" character.",
           character);
    }
    else{
      printf("The first occurence of \"%c\" character is the "
          "character under %p", character, result);
    }
  }
  return 0;
}

char * first_char_occurence(char * string, char target){
  return;
}
