/* Write a program which counts charactes (typed or from the file)
  untill receiveing EOF */
#include <stdio.h>
int count_char(void);
int main(void) {
  int characters_occurrences;
  characters_occurrences = count_char();
  printf("There were %d non whitespace characters.\n", characters_occurrences);
  return 0;
}
int count_char(void) {
  char character;
  int char_counter = 0;
  while((character = getchar()) != '\n' && character != ' ' && character != '\t') {
    continue; // skpis newline, space and tab
    char_counter++;
    if  (character == EOF) {
      printf("\n\nEnd of input stream (EOF detected).\n\n");
      return char_counter; // valid function end
    }
  }
  return character;
}
