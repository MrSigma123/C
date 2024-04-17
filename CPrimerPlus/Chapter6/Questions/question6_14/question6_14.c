/* What the following program will display? */
#include <stdio.h>
int main(void) {
  int k;
  printf("1: Hi!\n");
  printf("k = 1\n");
  printf("k in loop is equal to 1\n");
  printf("Now is equal to 3\n");
  printf("k = 3\n");
  printf("k in loop is equal to 3\n");
  printf("Now k is equal to 5\n");
  printf("k = 5\n");
  printf("k in loop is equal to 5\n");
  printf("Now k is equal to 7\n");
  printf("k = 7\n\n");
  for(k = 1, printf("%d: Hi!\n", k); printf("k = %d\n", k),
      k*k < 26; k+=2, printf("Now k is equal to %d\n", k))
    printf("k in loop is equal to %d\n", k);
  return 0;
}
