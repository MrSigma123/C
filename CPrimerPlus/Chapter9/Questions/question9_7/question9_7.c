/* Is the following function definition correct?
  
  void salami(num) {
    int num, counter;
    for (counter = 1; counter <= num; num++) {
      printf(" o salami mio!\n");
    }
  } */
#include <stdio.h>

void salami(int num);

int main(void) {
  int lines;
  printf("Enter the number of salami lines (sic!): ");
  scanf("%d", &lines);
  salami(lines);
  return 0;
}

void salami(int num) { // add argument type
  int counter; // remove num, redefinition
  for (counter = 1; counter <= num; counter++) {
    printf("O salami mio!\n");
  }
}
