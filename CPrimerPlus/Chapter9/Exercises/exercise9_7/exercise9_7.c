/* Write a program which reads the characters from stdin stream untill
  EOF is detected. For each character the program should inform if that
  certain character is a letter. If that character is a letter than the
  program should display the number of this letter in the latin alphabet.
  In example for the letter c and C both of these letters have the number
  3. Use a function which takes the caracter as an argument and returns
  the number of it's order in latin alphabet if it's the letter. In other
  case the function should return -1. */

#include <stdio.h>
#include <ctype.h>

int character_in_alphabet(char character);

int main(void) {
  char character_test;
  printf("This program uses function which test the character stream\n");
  printf("And for each character displays the number of this character\n");
  printf("in the alphabet order. In other case the function returns -1.\n");
  printf("The program works until EOF is detected.\n");
  printf("\nEnter the character stream:\n");
  while ((character_test = getchar()) != EOF) {
    if (isspace(character_test) == 1) {
      continue;
    }
    printf("%c = %d\n", character_test, character_in_alphabet(character_test));
  }
  return 0;
}

int character_in_alphabet(char character) {
  if (character >= 'a' && character <= 'z') {
    return character - 96;
  }
  else if (character >= 'A' && character <= 'Z') {
    return character - 64;
  }
  else {
    return -1;
  }
}
