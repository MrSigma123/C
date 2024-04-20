/* Create expressions equivalent to the following conditions */
#include <stdio.h>
int main(void) {
  int number;
  char ch;
  printf("a) number is greater or equal to 90, but smaller than 100\n");
  printf("\tA: (number >= 90 && number < 100)\n");
  printf("Enter number in accordance to above mentioned conditions (test): ");
  scanf("%d", &number);
  if (number >= 90 && number < 100)
    printf("\tvalue correct\n");
  printf("b) ch is not 'q' or 'k' character\n");
  printf("\tA: (ch != 'q' && ch != 'k')\n");
  printf("Enter character in accordance to above mentioned conditions (test): ");
  scanf(" %c", &ch);
  if (ch != 'q' && ch != 'k')
    printf("\tvalue correct\n");
  printf("c) number value is between 1 and 9 (included), but not equal to 5\n");
  printf("\tA: (number >= 1 && number <= 9 && number != 5)\n");
  printf("Enter number in accordance to above mentioned conditions (test): ");
  scanf("%d", &number);
  if (number >= 1 && number <= 9 && number != 5)
    printf("\tvalue correct\n");
  printf("d) number value is not between 1 and 9\n");
  printf("\tA: (number < 1 || number > 10)\n");
  printf("Enter number in accordance to above mentioned conditions (test): ");
  scanf("%d", &number);
  if (number < 1 || number > 10)
    printf("\tvalue correct\n");
  return 0;
}
