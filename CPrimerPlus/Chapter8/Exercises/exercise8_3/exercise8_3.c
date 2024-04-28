/* Write a program which reads the data until EOF is detected.
  The program should display the amount of lowercase letters,
  uppercase letteres and the amount of the remaining characters.
  Assume that to the certain letters there are assigned certain
  numerical values (or use ctype.h functions for portability) */
#include <stdio.h>
#include <ctype.h>

int main(void) {
  char character;
  int lowercase_count = 0;
  int uppercase_count = 0;
  int other_char_count = 0;
  printf("This proram counts lowercase letters, uppercase letters and other characters.\n");
  printf("Enter the stream of characters (simulate EOF to quit): ");
  while ((character = getchar()) != EOF) {
    if (islower(character)) {
      lowercase_count++;
    } else if (isupper(character)) {
      uppercase_count++;
    } else
      other_char_count++;
  }
  printf("\nThere are %d lowercase letters.\n", lowercase_count);
  printf("There are %d uppercase letters.\n", uppercase_count);
  printf("TJere are %d other characters.\n", other_char_count);

  return 0;
}
