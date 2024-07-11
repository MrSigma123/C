// How many elements are stored in ref array from question10_1 ?
#include <stdio.h>
int main(void) {
  int ref[] = {8, 4, 0, 2};
  int * ptr = &ref[3];
  int index;
  for (index = 0; ptr != &ref[index]; index++) {
    ;
  }
  printf("Inside ref[] array there are stored %d elements.\n", index + 1);
  return 0;
}
