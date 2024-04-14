// You suspect that the following program has some errors. Can you find them?
#include <stdio.h>
int main(void){
  int i = 1,
  float n;
  printf("Warning! Incoming fractions!\n");
  while (i < 30)
    n = 1/i;
    printf(" %f", n);
  printf("That's all.\n");
  return 0;
}
