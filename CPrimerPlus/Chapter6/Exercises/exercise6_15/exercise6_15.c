/* Write a program which takes the line from the input and displays
  that line in reverse order. You can keep the inputted values in
  the array of characters, assume the line can't be longer than 255
  characters. Remind yourself that scanf() function can be used with
  %c specifier to read characters one by one up to entering the newline
  character by pressing the enter */
#include <stdio.h>
#define LIMIT 255
int main(void) {
  int i;
  char stream[LIMIT];
  printf("Enter the stream of charcters: ");
  for (i = 0; stream[i-1] != '\n'; i++)
    scanf("%c", &stream[i]);
  printf("Your stream in reverse order: ");
  --i;
  while (--i >=0)
    printf("%c", stream[i]);
  printf("\n");
  return 0;
}
