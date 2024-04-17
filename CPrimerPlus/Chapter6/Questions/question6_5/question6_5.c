/* You suspest the following program to be faulty. What errors
  you are able to find in the source code? */
#include <stdio.h>
int main(void) {
  int i, j, lista(10);          // curly brackets instead square

  for (i = 1, i <= 10, i++) {   // wrong separators, comma instead semicolon, 0..9 indexes instead
    list[i] = 2*i + 3;          // fine so far
    for (j = 1, j > = i, j++)   // pain to the eyes, improper <:= operator typing and wrong separators
      printf(" %d", list[j]);
    printf("\n");
  // lost closing curly bracket and return statement
}
