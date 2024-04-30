/* Modyfy take_first() function from listing 8.8 in a way to make
  it return first printable character. Test it with a simple program. */

#include <stdio.h>
#include <ctype.h> // necessary library for isspace() function
char take_first_printed_char(void);
int main(void) {
  printf("Enter the character stream: ");
  putchar(take_first_printed_char());
  return 0;
}
char take_first_printed_char(void) {
  char ch;
  ch = getchar();
  while(isspace(ch) != 0) {
    ch = getchar();
  }
  while (getchar() != '\n') { // to eliminate remaining buffer characters
    continue;
  }
  return ch;
}
