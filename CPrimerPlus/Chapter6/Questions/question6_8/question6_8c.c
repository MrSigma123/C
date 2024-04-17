/* If the input string is "Saddle my steed!" what
  will be the effect of running every single following
  code snippet? (In ASCII code after space character
  the next character is an exclamation mark !). */
#include <stdio.h>
int main(void) {
  char ch;

  do {
    scanf("%c", &ch);
    printf("%c", ch);
  } while (ch != 't');
  return 0;
}
