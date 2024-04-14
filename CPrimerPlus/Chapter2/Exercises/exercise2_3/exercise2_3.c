/* simple program, which converts your age in years to your age in days */
#include <stdio.h>
int main(void){
  int age_in_years = 22;
  int age_in_days = age_in_years * 365;
  printf("Your age in years is %d\n", age_in_years);
  printf("Your age in days is %d\n", age_in_days);
  return 0;
}
