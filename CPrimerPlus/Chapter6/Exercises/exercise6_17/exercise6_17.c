/* Jim Lucky won one million dollars which he located
  to bank account with 8% interest a year. At the last
  day of each year Jim withdraws 100000 dolars. Write
  a program which will calculate how many years will
  pass before Jim will completely empty his account. */
#include <stdio.h>
int main(void) {
  double money = 1000000.0;     // initial value
  double withdraw = 100000.0;   // constant withdaw
  const double interest = 0.08;
  int i = 0;
  do {
    i++;
    money -= withdraw;
    money += money * interest;
  } while (money > 0);
  printf("After %d years Jim will completely empty his bank account.\n", i);
  printf("Moreover he will not only be broke, he will be at $%.2lf debt!\n", money);
  return 0;
}
