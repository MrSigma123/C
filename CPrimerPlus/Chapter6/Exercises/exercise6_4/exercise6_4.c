/* Use nested loops to achieve the following result: 
  A
  BC
  DEF
  GHIJ
  KLMNO
  PQRSTU */
#include <stdio.h>
int main(void) {
  int i, j;
  char ch = 'A';
  for (i = 0; i < 6; i++) {
    for (j = 0; j - 1 < i; j++)
      printf("%c", ch++);
    printf("\n");
  }
}
