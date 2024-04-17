/* If the input string is "Saddle my steed!" what
  will be the effect of running every single following
  code snippet? (In ASCII code after space character
  the next character is an exclamation mark !). */
#include <stdio.h>
int main(void) {
  char ch;

  scanf("%c", &ch);
  for (ch = '@'; ch != 't'; scanf("%c", &ch))
    putchar(ch);
  return 0;
}
