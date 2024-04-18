/* Use nested loops to achieve the following pattern: 
  $
  $$
  $$$
  $$$$
  $$$$$ */
#include <stdio.h>
int main(void) {
  int i, j;
  const int limit = 5;
  for (i = 0; i < limit; i++) {
    for (j = limit - 1 - i; j < limit; j++)
      printf("$");
    printf("\n");
  }
  return 0;
}
