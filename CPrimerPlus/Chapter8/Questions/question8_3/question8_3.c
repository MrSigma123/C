/* Let's assume that we have executable program with 'count' filename
  which displays the number of entered characters. Create a command
  which will count all the characters from the file 'essay' and will
  write it's data to essay_count file. */
#include <stdio.h>
int main(void) {
  printf("./count < essay > essay_count\n");
  printf("or\n");
  printf("./count > essay_count < essay\n");
  return 0;
}
