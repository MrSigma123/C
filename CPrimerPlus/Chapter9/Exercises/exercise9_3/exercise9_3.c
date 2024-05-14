/* Write a function which takes three arguments, character and two integer values.
  The first value should specify how many times the character should be printed
  in the single row and the second value should specify the number of rows.
  Write a program which uses this function. */
#include <stdio.h>
void print_character(char ch, int occurences, int rows); /* function declaration */
int main(void) {
  char character;
  int quantity, lines;
  printf("This program prints the character desired number of times in specifed number of lines.\n");
  printf("Enter the character: ");
  scanf("%c", &character);
  printf("Now enter the number of character quantity in single line: ");
  scanf("%d", &quantity);
  printf("Now enter the number of lines: ");
  scanf("%d", &lines);
  print_character(character, quantity, lines);
  return 0;
}
void print_character(char ch, int occurrences, int rows) { /* function definition */
  int i, j;
  for (i = 0; i < rows; i++) {
    for (j = 0; j < occurrences; j++) {
      printf("%c", ch);
    }
    printf("\n");
  }
}
