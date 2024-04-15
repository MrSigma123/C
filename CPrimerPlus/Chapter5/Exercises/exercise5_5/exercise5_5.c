/* Modify the program add.c (listing 5.13) which calculates the sum of first 20
  integer numbers (if you want you can treat that program as the program which
  calculates how many money you'll receive in 20 days if you'll earn 1$ for the
  first day, 2$ for the second, 3$ for the third etc.). Modify this program in
  the way to let the user specify the range of performed calculations. It means
  you should change the constant 20 for variable given by the user */
/* it's modified version of examplecode from listing 5.13 */
#include <stdio.h>
int main(void){ // calculates the sum of first 20 integer numbers
  int counter, sum, days;           /* declaration statement        */
  counter = 0;                /* asignment statement          */
  sum = 0;                    /* like above                   */
  printf("Enter the number of worked days. You'll receive one dolar more\n");
  printf("than yesterday each day (1, 2, 3, etc.): ");
  scanf("%d", &days);
  while (counter++ < days)    /* statement                    */
    sum = sum + counter;      /* while                        */
  printf("sum = %d\n", sum);  /* function call                */

  return 0;
}

