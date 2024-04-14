/* It's an alternative solution for linting 5.9, it simplifies previous code
  by repleacing previous two scanf() functions with just one scanf() call (from
  this listing), but this solution is worse than the original. Why? */
#include <stdio.h>
#define SEC_IN_MIN 60
int main(void){
  int sec, min, remainder;

  printf("This program converts seconds to minutes and seconds.\n");
  printf("Enter the number of seconds, which you want to convert.\n");
  printf("Enter 0, to end the program.\n");
  scanf("%d", &sec);   // adding second scanf() function call
  while (sec > 0) {
    // scanf("%d", &sec);
    min = sec / SEC_IN_MIN;
    remainder = sec % SEC_IN_MIN;
    printf("%d seconds is %d minutes, %d seconds.\n", sec, min, remainder);
    printf("Next value?\n");
    scanf("%d", &sec); // movind scanf() at the end of the while loop
  }
  printf("Goodbye!\n");
  return 0;
}
/* The problem here lays in uncertainty of the value stored initially inside sec variable.
   If pre-initialized value is equal or smaller than 0 the program simply won't work.
   To solve this problem there is required usage of another scanf() statement and moving
   existent scanf() call at the end of the while loop. Fixed code is above.*/
