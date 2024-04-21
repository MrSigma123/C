/* Using if else statement write a program which reads input data
  up to # character and then replaces every single dot character
  with en exclamation mark and every exclamation mark with two
  exclamation marks. The program should also display the number
  of changes the program has done. */
#include <stdio.h>
#define DOT '.'
#define EXCLAMATION_MARK '!'
int main(void) {
  char character;
  int changes = 0;
  printf("This program replaces dots with exclamation marks and\n");
  printf("replaces exclamation marks with two exclamation marks.\n");
  printf("Enter the tream of input to be modified (# ends the input):\n");
  while (scanf("%c", &character) && character != '#') {
    if (character == DOT) {
      character = EXCLAMATION_MARK;
      changes++;
    }
    else if (character == EXCLAMATION_MARK) {
      putchar(character);
      changes++;
    }
    putchar(character);
  }
  printf("The program has done %d changes.\n", changes);
  return 0;
}

