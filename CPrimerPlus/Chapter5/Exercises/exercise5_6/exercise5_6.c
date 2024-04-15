/* Now modify the previous program (exercise_5_5) in a way to make it
   calculate the sum of squares of the integer numbers. (If you wish
   you can treat this program as the program, which will calculate how
   many money you'll receive if you'll earn 1$ first day, 4$ second day,
   9$ third day, etc. It looks like it's way better business!) C programing
   language doesn't have any operator to calculate power of the number, but
   we'll use different approach - n square is n * n */
/* it's modified version of Chapter5 exercise5_5 solution */
#include <stdio.h>
int main(void){ // calculates the sum of first 20 integer numbers
  int counter, sum, days;          /* declaration statement        */
  counter = 0;                     /* asignment statement          */
  sum = 0;                         /* like above                   */
  printf("Enter the number of worked days. You'll receive one dolar more\n");
  printf("than yesterday each day (1, 2, 3, etc.): ");
  scanf("%d", &days);
  while (counter++ < days)         /* statement                    */
    sum = sum + counter * counter; /* while                        */
  printf("sum = %d\n", sum);       /* function call                */

  return 0;
}

