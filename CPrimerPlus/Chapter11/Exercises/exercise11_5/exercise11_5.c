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

char * first_char_occurrence(char * string, char target);

int main(void){
  int i;
  char string[81];
  char character;
  char * result;

  printf("The program will take a word and a test character in a loop\n");
  printf("To stop the loop enter just empty line [ENTER].\n");
 
  while(1){
    printf("\nEnter a word: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0'; // remove '\0'

    if(string[0] == '\n' || string[0] == '\0'){
      printf("\nThe program ends here.\n");
      break;
    }

    printf("Enter the character to be found: ");
    scanf(" %c", &character);
    while (getchar() != '\n'); // clear the buffer

    result = first_char_occurrence(string, character);
    if (result == NULL){
      printf("There is any occurrecne of the \"%c\" character.\n",
           character);
    }
    else{
      printf("The first occurrence of \"%c\" character is the "
          "character under %p\n", character, result);
      printf("The position of the occurrence is the character No.%ld.\n",
             result - string + 1);
    }
  }
  return 0;
}

char * first_char_occurrence(char * string, char target){
  int i;
  for (i=0; string[i] != '\0'; i++){
    if(string[i] == target){
      return &string[i];
    }
  }
  fflush(stdout);
  return NULL;
}
