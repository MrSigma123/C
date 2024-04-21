/* What errors can you spot in that program? */
#include <stdio.h>
int main(void) {
  char ch;
  int lc_count = 0;     /* lowercase counter */ // close comments
  int capt_count = 0;   /* capital counter   */
  int other_count = 0;  /* other character counter */
  while ((ch = getchar()) != '#') {       // fix typo
    if ('a' <= ch && ch <= 'z')           // fix condition statement
      lc_count++;
    else if (!(ch < 'A') && !(ch > 'Z'))  // fix another condition
      capt_count++;
    else                                  // add else statement
      other_count++;
  }
  printf("%d lowercase letters, %d capital letters, %d other characters", lc_count,
      capt_count, other_count);           // add quotation marks
  return 0;
}
