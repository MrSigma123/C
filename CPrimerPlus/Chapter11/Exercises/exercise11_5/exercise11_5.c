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
#include <string.h>

char * first_char_occurence(char * string, char target);

int main(void){
  char string[81];
  char character;
  char * result;

  printf("The program will take a word and a test character in a loop\n");
  printf("To stop the loop enter thre dots in a row (...).\n");
 
  while(1){
    printf("\nEnter a word: ");
    fgets(string, 80, stdin);

    if(strcmp(string, "...") == 1){
      printf("\nThe program ends here.\n");
      break;
    }
    fflush(stdout);

    printf("Enter the character to be found: ");
    scanf("%c", &character);

    result = first_char_occurence(string, character);
    if (result == NULL){
      printf("There is any occurecne of the \"%c\" character.\n",
           character);
    }
    else{
      printf("The first occurence of \"%c\" character is the "
          "character under %p\n", character, result);
    }
  }
  return 0;
}

char * first_char_occurence(char * string, char target){
  int i;
  for (i=0; string[i] != '\0'; i++){
    if(string[i] == target){
      return &string[i];
    }
  }
  fflush(stdout);
  return NULL;
}
