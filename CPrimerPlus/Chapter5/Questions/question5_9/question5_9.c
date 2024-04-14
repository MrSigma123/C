// Change previous program in a way to make this program display
// letters from a to g
#include <stdio.h>
#define G 'g'
int main(void){
  char n = 'a' - 1;

  while (n++ <= G)
    printf("%5c", n);
  printf("\n");
  return 0;
}
/* After changing the type of n variable from int to char,
  adding G == 'g' constant instead of TEN == 10
  and changing the format specifier inside looped printf() function
  the program will display letters from a to g */
