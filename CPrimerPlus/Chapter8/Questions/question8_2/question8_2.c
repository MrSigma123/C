/* What will be the result of every single command given below? */
#include <stdio.h>
int main(void) {
  printf("putchar('H');    A: H;        R: %c\n", putchar('H'));
  printf("putchar('\007'); A: sound     R: %c\n", putchar('\007'));
  printf("putchar('\\n');  A: nweline   R: %c", putchar('\n')); // that's why there's not \n
  printf("putchar('\b');   A: backspace R: %c\n", putchar('\b'));
  return 0;
}
