/* Write a program which reads input data up to entering # character.
  Then the program should display how many times the string "ot" has
  occured. */
#include <stdio.h>
#define END '#'
int main(void) {
  char current_char;
  char previous_char = 'x'; // initialization for consistency
  int ot_string_count = 0;
  while (scanf("%c", &current_char) && current_char != END) {
    if (previous_char == 'o' && current_char == 't')
      ot_string_count++;
    previous_char = current_char;
  }
  printf("The program counted %d occurrences of \"ot\" string\n",
         ot_string_count);
  return 0;
}
