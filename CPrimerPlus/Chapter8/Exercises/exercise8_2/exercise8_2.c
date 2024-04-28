/* Write a program which reads the input data up to EOF character and
  displays`every single character with it's ASCII code. Remember that
  non printed characters with their code lesser than space character
  should be treated in special way. If the character is a tabulator or
  newline character it should display \t or \n. Other non printed cases
  should be represented as ther sequential character. In example the
  character with the code 1 is an ctrl+A, what can be written as ^A.
  Pay attention that ASCII letters have code greater by 64 then ctrl+A character
  code. Similar correlation takes place with other non printed characters.
  In one program output line there should be ten pairs character-code but
  reading the newline character should begin newline output as well.
  (Attention: in some operating systems some non printed characters can
  have their own special representation and might not be able to be displayed
  at all as on output) */
#include <stdio.h>

int main(void) {
  char character;               // to store the character
  int ascii_in_line = 0;        // to store already displayed values in the line
  printf("This program will display ASCII code representations of input characters.\n");
  printf("Enter character stream (simpulate EOF to end the program): ");
  while((character = getchar()) != EOF) {
    ascii_in_line++;            // start counting the characters in line from 1 to 10
    if (ascii_in_line == 11) {  // if counter exceeds the max value 10 the counter resets
      ascii_in_line = 1;
      printf("\n");
    }
    if (character == '\n') {
      ascii_in_line = 0;
      printf("space = \\n, ");
      printf("\n");
      continue;
    }
    if (character == '\t') {
      printf("tab = \\t, ");
      continue;
    }
    if (character >= 0 && character < 32) {
      printf("Ctrl+%c", character + 64);
    }
    printf("%c = %d, ", character, character);
  }
  return 0;
}

