/* Write a program which reads input data up to encoutering # sign
  and then displays every inputted character with it's related ASCII
  code. In single line there should be 8 char-code pairs. Proposition:
  use counter for the caracters and % operator to display newline character
  every 8 loop cycles. */
#include <stdio.h>
#define STOP '#'
#define LIMIT 8
int main (void) {
  char character;
  int counter;
  printf("Enter as many characters as you wish. The program\n");
  printf("will display the ASCII codes matched to these characters.\n");
  printf("Start typing:\n");
  while ((character = getchar()) != '#') {
    if (character == '\n' || character == ' ') {
      counter = 0;
      printf("\n");
      continue;
    }
    putchar(character);
    printf("=%03d ", character);
    counter++;
    if (counter % 8 == 0 && counter != 0) {
      counter = 0;
      printf("\n");
    }
  }
  return 0;
}
