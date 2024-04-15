/* Write a program which asks the user about entering the number
  of the days and then converts them to weeks and days. For example
  the program will converts 18 days to 2 weeks and 4 days. Display the
  output in the following way:
  18 days is an equivalent of 2 weeks and 4 days.
  In the program use the while loop to enamble the user using multiple 
  prompts */
#include <stdio.h>
#define DAYS_IN_WEEK 7
int main(void){
  int days, weeks, days_remainder;
  printf("This program converts the numbers of days to weeks and days.\n");
  printf("Enter the number of days (or 0 or less to exit): ");
  scanf("%d", &days);
  while (days > 0){
    weeks = days / 7;
    days_remainder = days % 7;
    printf("%d days is an equivalent of %d weeks and %d days.\n", days,
           weeks, days_remainder);
    printf("\nEnter the number of days (or 0 or less to exit): ");
    scanf("%d", &days);
  }
  return 0;
}
