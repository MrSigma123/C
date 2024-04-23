/* putchar(getchar()) is a correct expression. What is
  it's side effect? Is getchar(putchar()) correct expression
  as well? */
#include <stdio.h>
int main(void) {
  printf("putchar(getchar()) is a correct expression. It's\n");
  printf("side effect will be as follows: the character taken\n");
  printf("as an argument by getchar() function will be passed\n");
  printf("to putchar() function and will be displayed on the screen.\n");
  printf("On the other hand getchar(putchar()) isn't correct, because\n");
  printf("getchar() doesn't need an argument and putchar() contrary,\n");
  printf("needs one.\n");
  return 0;
}
