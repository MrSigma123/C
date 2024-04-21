/* Write a program which reads input data up to receiving
  # character and then displays the number of read space characters,
  newline characters and all other characters. */
#include <stdio.h>
int main(void) {
  const char STOP = '#';
  char character;
  int spaces = 0;
  int newlines = 0;
  int other_chars = 0;
  printf("Enter the text, the program will count how many spaces, newlines,\n");
  printf("and other characters are there (enter # to exit):\n");
  while ((character = getchar()) != STOP) {
    if (character == '\n') {
      newlines++;
      continue;
    }
    if (character == ' ') {
      spaces++;
      continue;
    }
    other_chars++; // if the character is not ' ' or '\n'
  }
  printf("There are %d spaces, %d newlines and %d other characters\n",
         spaces, newlines, other_chars);
  return 0;
}
