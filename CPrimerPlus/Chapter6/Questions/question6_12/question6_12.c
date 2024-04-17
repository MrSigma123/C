/* Let's assume that you want to write a function which returns long type
  variable. What elements should be involved in it's function definition? */
#include <stdio.h>
long returnDoubleLong (long received);
int main(void) {
  long myLong;
  scanf("%ld", &myLong);
  printf("%ld in long and %ld is double long", myLong, returnDoubleLong(myLong));
  return 0;
}
long returnDoubleLong(long received) {
  received *= 2;
  return received;
}
