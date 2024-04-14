/* this program converts your age into the seconds */
#include <stdio.h>
int main(void)
{
  int age;
  double seconds_in_year = 3.156e7;
  double your_age_in_seconds;
  printf("Please enter your age in years: ");
  scanf("%d", &age);
  your_age_in_seconds = age * seconds_in_year;
  printf("Your age in seconds is approximately %f\n", your_age_in_seconds);
  return 0;
}
