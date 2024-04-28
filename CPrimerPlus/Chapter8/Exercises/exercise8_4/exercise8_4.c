/* Write a program which reads the data until receiving EOF.
  The program should display the average amount of the letters
  in each counted word. Remember that you can't count any non
  printable character as an actual letter. Strictly speaking
  you shouldn't count as well any punctuacion marks, but you
  don't have to worry about it. (If you want to worry about it
  you case use ispunct() from ctype.h library) */
#include <stdio.h>
#include <ctype.h>

int main(void) {
  char character;
  char character_prev = '.'; // non letter for initialization
  int word_count = 0;
  int letters_count = 0;
  double letters_average;
  printf("This program counts the average amount of letters in each word\n"
         "from the input stream. Enter the character stream: ");
  while ((character = getchar()) != EOF) {
    if (isspace(character_prev) == 0 && ispunct(character_prev) == 0 && isspace(character) == 0 && ispunct(character) == 0) {
      letters_count++;
    } else if (isspace(character_prev) != 0 || ispunct(character_prev) != 0 && isspace(character) == 0 && ispunct(character) == 0) {
      word_count++;
      letters_count++;
    } else { // two remaining conditions simplified in one else
      // if (isspace(character_prev) == 0 || ispunct(character_prev) == 0 && isspace(character) != 0 || ispunct(character) != 0)
      // if (isspace(character_prev) == 0 || ispunct(character_prev) == 0 && isspace(character) == 0 || ispunct(character) == 0) 
      ; // empty statement
    }
    character_prev = character;
  }
  printf("There are %d words and %d letters.\n", word_count, letters_count);
  letters_average = (double) letters_count / word_count;
  printf("There were approximately %.1lf letters in a word.\n", letters_average);

  return 0;
}

