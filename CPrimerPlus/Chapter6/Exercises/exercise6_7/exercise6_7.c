/* Write a program which takes single word into the char array
  and then displays it backwards. Hint: use strlen() to calculate
  index of last character from an array (look at chapter 4 "Strings
  and formatted input-output") */
#include <stdio.h>
#include <string.h>
int main(void) {
  int i;
  char string[30];
  printf("Enter a word: ");
  scanf("%s", string);
  printf("You've entered a word: %s\n", string);
  printf("This word backwards is: ");
  for (i = strlen(string); i >= 0; --i)
    printf("%c", string[i]);
  printf("\n");
  return 0;
}
