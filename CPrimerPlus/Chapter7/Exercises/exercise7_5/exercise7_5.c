/* Write again the same program as in exercise 4 but using switch
  statement instead */
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
    switch(character) {
      case DOT :
        character = EXCLAMATION_MARK;
        changes++;
        putchar(character);
        break;
      case EXCLAMATION_MARK:
        putchar(character);
        putchar(character);
        changes++;
        break;
      default :
        putchar(character);
    }
  }
  printf("The program has done %d changes.\n", changes);
  return 0;
}
