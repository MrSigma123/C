/* You suspest the following program to be faulty. What errors
  you are able to find in the source code? */
#include <stdio.h>
int main(void) {
  int i, j, list[10];          // curly brackets instead square and fixed typo

  for (i = 0; i <= 9; i++) {   // wrong separators, comma instead semicolon, 0..9 indexes instead
    list[i] = 2*i + 3;
    for (j = 0; j <= i; j++)   // pain to the eyes, improper <:= operator typing and wrong separators
      printf(" %d", list[j]);
    printf("\n");
  }
  return 0;
  // lost closing curly bracket and return statement
}
