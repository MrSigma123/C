/* It's an additional task: Write a function which reads the stream of characters
  but takes only the first printed character */
#include <stdio.h>
#include <ctype.h> // necessary library for isspace() function
char take_first_printed_char(void);
int main(void) {
  printf("Enter the character: ");
  putchar(take_first_printed_char());
  return 0;
}
char take_first_printed_char(void) {
  char ch;
  ch = getchar();
  while(isspace(ch) != 0) {
    ch = getchar();
  }
  while (getchar() != '\n') {
    continue;
  }
  return ch;
}
