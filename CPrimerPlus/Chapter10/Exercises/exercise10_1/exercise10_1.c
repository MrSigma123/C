/*
Modify the metereologic program from listing 10.7 is such way to make it
perform calculations by using the pointers instead of indexes. (There is
still necessary to declare and initialize the array)
*/
/* rain.c (modified) -- finds yearly sums, yearly average and 
  monthly average for rain data from several years */
#include <stdio.h>
#define MONTHS 12     /* number of months in years */
#define YEARS 5       /* number of data years      */
int main(void) {
  /* rain data initialization from years 2010 - 2014 */
  const float rain[YEARS][MONTHS] = {
    {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
    {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
    {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
    {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
    {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
  };
  int year, month;
  float subsum, sum;
  printf(" YEAR         PRECIPITATION (in inches)\n");
  for (year = 0, sum = 0; year < YEARS; year++) {
    /* for each year sum the precipitation for each month */
    for (month = 0, subsum = 0; month < MONTHS; month++) {
      subsum += rain[year][month];
    }
    printf("%5d %12.1f\n", 2010 + year, subsum);
    sum += subsum; /* sum of each year */
  }
  printf("\nYearly average is %.1f inches\n\n", sum/YEARS);
  printf("MONTHLY AVERAGE:\n\n");
  printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  ");
  printf("Nov  Dec\n");

  for (month = 0; month < MONTHS; month++) {
    /* for each month sum the precipitation from several years */
    for (year = 0, subsum = 0; year < YEARS; year++) {
      subsum += rain[year][month];
    }
    printf("%4.1f ", subsum / YEARS);
  }
  printf("\n");
  return 0;
}

