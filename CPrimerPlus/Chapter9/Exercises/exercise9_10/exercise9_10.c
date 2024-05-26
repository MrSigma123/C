/* Generalize the function to_binary() from listing 9.8 to the to_base_n()
  which should take as the second argument the value from the rage (2 - 10).
  Then that function should display the number taken as the first argument
  which is corresponding to the second argument represented in other number
  system. In example the function to_base_n(129, 8) should display 201 which
  is the octal representation of 129 in decimal system. Check if that function
  works correctly by writing simple program which uses that function. */

// below is the code to be generalized

#include <stdio.h>

void to_binary(unsigned long n);

int main(void) {
  unsigned long number;
  printf("Enter the integer number (q to quit):\n");
  while (scanf("%ld", &number) == 1) {
    printf("Binary equivalent: ");
    to_binary(number);
    putchar('\n');
    printf("Enter the integer number (q to quit):\n");
  }
  printf("Done.\n");

  return 0;
}

void to_binary(unsigned long n) { /* recursive function */
  int r;
  r = n % 2;
  if (n >= 2) {
    to_binary(n / 2);
  }
  putchar(r == 0 ? '0' : '1');
  return;
}
