/* What the following program will display after receiving
  the followind input data? 
  q
  c
  h
  b */
#include <stdio.h>
int main(void) {
  char ch;
  printf("After qchc the program will display:\n");
  printf("Step 1\nStep 2\nStep 3\nStep 1\nStep 1\nStep 3\nStep 1\nEnd\n");
  while ((ch = getchar()) != '#') {
    if (ch == '\n')
      continue;
    printf("Step 1\n");
    if (ch == 'c')
      continue;
    else if (ch == 'b')
      break;
    else if (ch == 'h')
      goto last_step;
    printf("Step 2\n");
  last_step:  printf("Step 3\n");
  }
  printf("End\n");
  return 0;
}

