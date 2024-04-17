/* What the following loop will display assuming that value has int type? */
#include <stdio.h>
int main(void) {
  int value;
  for (value = 36; value > 0; value /= 2)
    printf("%3d", value);
  printf("\nThere will be printed:\n");
  printf(" 36 18  9  4  2  1\n");
  return 0;
}
