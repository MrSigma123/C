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
  char end_character;
  char start_character;
  char tmp_character;
  printf("Enter capital character to define \"pyramid\" height: ");
  scanf("%c", &end_character);
  start_character = 'A'; 
  for (i = 0; i <= end_character - 'A'; i++) {
    j = end_character - start_character; // to calculate number of ' ' chars
    tmp_character = start_character; // to store incremented chars
    //printf("j = %d\n", j);
    while (j-- -i > 0) 
      printf("%c", ' ');
    //printf("j = %d\n", j);
    while (j++ < i)
      printf("%c", tmp_character++);
    //printf("j = %d\n", j);
    while (tmp_character - 1 > start_character)
      printf("%c", --tmp_character);
    printf("\n");
    --j;
  }
  return 0;
}
// j shouldn't be dependable value, fix
