/* Use nested loops to achieve the following pattern: 
  F
  FE
  FED
  FEDC
  FEDCB
  FEDCBA */
#include <stdio.h>
int main(void) {
  char ch = 'F';
  int i;
  for (i = 0; i <= 'F' - 'A'; i++) {
    for (ch = 'F'; ch >= 'F' - i; ch--) {
      printf("%c", ch);
    }
    printf("\n");
  }
  return 0;
}
