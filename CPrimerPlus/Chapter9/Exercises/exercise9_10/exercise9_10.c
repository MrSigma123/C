/* Generalize the function to_binary() from listing 9.8 to the to_base_n()
  which should take as the second argument the value from the rage (2 - 10).
  Then that function should display the number taken as the first argument
  which is corresponding to the second argument represented in other number
  system. In example the function to_base_n(129, 8) should display 201 which
  is the octal representation of 129 in decimal system. Check if that function
  works correctly by writing simple program which uses that function. */

#include <stdio.h>

void to_base_n(unsigned long n, int base);

int main(void) {
  unsigned long number;
  int base;
  printf("This program converts any natural number to specified n_base system.\n");
  printf("Enter the natural number and n_base (q to quit):\n");
  while (scanf("%lu %d", &number, &base) == 2) {
    printf("n_base equivalent of %lu is : ", number);
    to_base_n(number, base);
    putchar('\n');
    printf("Enter the natural number (q to quit):\n");
  }
  printf("Done.\n");

  return 0;
}

void to_base_n(unsigned long n, int base) { /* recursive function */
  int digit;
  digit = n % base;
  if (n >= base) {
    to_base_n(n / base, base);
  }
  printf("%d", digit);
  return;
}
