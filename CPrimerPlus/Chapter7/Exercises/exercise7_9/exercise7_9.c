/* Write a program which takes an positive integer value
  and displays all prime numbers smaller or equal to inputted
  number */
#include <stdio.h>
int main(void) {
  unsigned int input;
  int i, j;
  int is_prime;
  printf("This program takes an positive integer value\n"
         "and displays all prime numbers smaller or equal\n"
         "to inputted number.\n");
  printf("Enter positive integer number: ");
  scanf("%ud", &input);
  for (i = 2; i <= input; i++) {
    is_prime = 1;     // assume that i value is prime
    for (j = 2; j * j <= i; j++) {
      if (i % j == 0 && j != i) {
        is_prime = 0; // not a prime
      } 
    }
    if (is_prime) {
      printf("%d ", i);
    }
  }
  return 0;
}

