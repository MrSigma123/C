/* Modify the program from question 9 to work exactly the same
  but without usage of continue and goto functions */
#include <stdio.h>
int main(void) {
  char ch;
  printf("After qchc the program will display:\n");
  printf("Step 1\nStep 2\nStep 3\nStep 1\nStep 1\nStep 3\nStep 1\nEnd\n");
  while ((ch = getchar()) != '#') {
    while (ch == '\n')
      ch = getchar();
    printf("Step 1\n");
    if (ch == 'c') {
      ch = getchar();
      printf("Step 1\n");
    }
    else if (ch == 'b')
      break;
    else if (ch == 'h') {
      printf("Step 3\n");
      ch = getchar();
      while (ch == '\n')
      ch = getchar();
    printf("Step 1\n");
    if (ch == 'c') {
      ch = getchar();
      printf("Step 1\n");
    }
    else if (ch == 'b')
      break;
    }
    if (ch != 'h')
      printf("Step 2\n");
  printf("Step 3\n");
  }
  printf("End\n");
  return 0;
}
