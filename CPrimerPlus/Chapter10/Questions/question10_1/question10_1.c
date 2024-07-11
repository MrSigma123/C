// What the following program will display?
#include <stdio.h>
int main(void) {
  int ref[] = {8, 4, 0, 2};
  int *ptr;
  int index;

  for(index = 0, ptr = ref; index < 4; index++, ptr++) {
    printf("%d %d\n", ref[index], *ptr);
  }
  printf("ANSWER: The program will display:\n");
  printf("8 8\n");
  printf("4 4\n");
  printf("0 0\n");
  printf("2 2\n");
  return 0;
}
