/* Write a program which takes an capital letter from the user and then displays
  the following "pyramid", use nested loops:
      A
     ABA
    ABCBA
   ABCDCBA
  ABCDEDCBA
  The disign should end at entered character by the user. In example
  if the user enters capital E the design would look like as above. 
  TIP: use three loops inside the outer loop */
#include <stdio.h>
int main(void) {
  int i, j;
  int limit;
  char end_character;
  char character;
  printf("Enter capital character to define \"pyramid\" height: ");
  scanf("%c", &end_character);
  limit = end_character - 'A';
  for (i = 0; i <= end_character - 'A'; i++) {
    character = 'A';
    j = 0;
    while (j++ < limit)
      printf("%c", ' ');
    j = 0;
    while (j++ < i + 1)
      printf("%c", character++);
    j = 0;
    while (j++ < i)
      printf("%c", --character - 1);
    printf("\n");
    limit--;
  }
  return 0;
}
