#include <stdio.h>
#define BOOK "War and peace"
int main(void)
{
  float price = 41.99;
  float procent = 80.0;

  printf("The wholesale price of this particular book %s is %2.2f USD\n", BOOK, price);
  printf("It's %2.1f of the wholesale price", procent);
  return 0;
}
