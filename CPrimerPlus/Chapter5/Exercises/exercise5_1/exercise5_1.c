/* Use the while loop to convert time in minutes
   to minutes and seconds. Use symbolic constant for
   the value of 60 by using #define or const and
   remember to provide the condition to end the loop
   when the user will enter the time equal or smaller than 0 */
#include <stdio.h>
#define MIN_IN_HOUR 60
int main(void){
  int minutes;
  int hours;
  int minutes_remainder;
  printf("This program converts the number of minutes to hours and minutes.\n");
  printf("Enter the number of minutes you want to convert (0 or less to exit): ");
  scanf("%d", &minutes);
  while (minutes > 0){
    hours = minutes / MIN_IN_HOUR;
    minutes_remainder = minutes % MIN_IN_HOUR;
    printf("In the amount you've entered there is %d hours and %d minutes\n",
           hours, minutes_remainder);
    printf("\nEnter the number of minutes you want to convert (0 or less to exit): ");
    scanf("%d", &minutes);
  }
  return 0;
}
