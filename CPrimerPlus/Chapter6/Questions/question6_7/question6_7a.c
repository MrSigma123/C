/* What the following program will print? a) */
#include <stdio.h>
int main(void) {
  int i = 0;
  printf("Hi! Hi! Hi! Goodbye! Goodbye! Goodbye! Goodbye! Goodbye!\n");
  while (++i < 4)
    printf("Hi! "); // entry condition
  do
    printf("Goodbye! "); 
  while ( i++ < 8); // exit condition
  return 0;
}

