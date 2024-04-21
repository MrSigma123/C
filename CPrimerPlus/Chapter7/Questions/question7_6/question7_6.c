/* What the following program will display? */
#include <stdio.h>
int main(void) {
  int i = 0;
  while (i < 3) {
    switch(i++) {
      case 0 : printf("Horray!");
      case 1 : printf("Horr");
      case 2 : printf("Ho");
      default: printf("Oh no!");
    }
    putchar('\n');
  }
  return 0;
}
