/* There are given the following sequences:
  + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
  - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
  Write a program which calculates the values of these
  two sums to certain value given by the user. The user
  should be able to stop the calculations by entering
  negative limit. Take a look a the sum of the 100, 1000
  and 10 000 terms. Is any of the following sequences
  converges to any certain value? Hint: -1 multiplied by
  odd number of times is equal to -1, -1 multiplied by even
  number of times is equal to +1. */
#include <stdio.h>
int main(void) {
  double sequence1, sequence2, denominator;
  const double numerator = 1.0;
  int terms, i, n;
  printf("This program calculates the sum of the following sequences:\n");
  printf(" + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...\n");
  printf(" - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...\n");
  printf("Enter the number of terms to be summed: ");
  scanf("%d", &terms);
  while (terms > 0) {               // to enable multiple prompts
    n = 1;
    sequence1 = 0;
    sequence2 = 0;
    denominator = 2.0;
    for (i = 0; i < terms; i++) {   // to calculate the sums of two separate sequences
      n *= -1;
      sequence1 += numerator/denominator;
      sequence2 += n * (numerator/denominator++); 
    }
    printf("\nThe sum of the first %d terms of + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...\n", terms);
    printf("is equal to %lf\n", sequence1);
    printf("The sum of the first %d terms of - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...\n", terms);
    printf("is equal to %lf\n", sequence2);
    printf("\nEnter the number of terms to be summed: ");
    scanf("%d", &terms);
  }
  printf("End\n");
}
