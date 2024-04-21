/* What errors can you spot in that program? */
#include <stdio.h>
int main(void) {
  char ch;
  int lc_count = 0;     /* lowercase counter
  int capt_count = 0;   /* capital counter
  int other_count = 0;  /* other character counter
  while ((ch = getchat()) != '#') {
    if ('a' <= ch >= 'z')
      lc_count++;
    else if (!(ch < 'A') || !(ch > 'Z'))
      capt_count++;
    other_count++;
  }
  printf(%d lowercase letters, %d capital letters, %d other characters, lc_count,
      capt_count, other_count);
  return 0;
}
