/* Eva invests 100$ and earns 10% of profit a year - simple interest
  each year investment gives 10% profit of it's initial value. Kate
  invests 100$ and earns 5% yearly - compond interest. It's 5% from
  current value including previously gained interest. Write a program
  which performs calculations to find out after how many years
  interest of Kate will exceed the interest of Eva and will display
  both results, which will be then reached. */
#include <stdio.h>
int main(void) {
  double Eva_interest = 100.0;
  double Kate_interest = 100.0;
  int i;
  do {
    i++;
    Eva_interest += 10.0;
    Kate_interest += Kate_interest* 0.05;
  } while (Eva_interest > Kate_interest);
  printf("Kate's interest will exceed Eva's interest after %d years.\n", i);
  printf("Than Kate's interest will reach $%.2lf\n", Kate_interest);
  printf("And Eva's interest will reach $%.2lf\n", Eva_interest);
  return 0;
}
