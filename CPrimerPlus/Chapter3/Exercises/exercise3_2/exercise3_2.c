/* this program prints the desired character ASCII code */
#include <stdio.h>

int main(void)
{
  char character;
  printf("Please enter the desired character. This program will print this character ASCII code: ' '\b\b");
  scanf("%c", &character);
  printf("The character '%c' ASCII code is %d\n", character, character);

  printf("\nTo check, if everything works correctly please enter the ASCII code, to see the character output: ");
  scanf("%d", &character);
  printf("The code %d reffers to the charcter '%c'\n", character, character);
  return 0;
}
