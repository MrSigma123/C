/* Design a function row_char(ch, i, j) which displays
  the ch character in columns from i to j. Test it with
  simple program. */
#include <stdio.h>
void row_char(char ch, int i, int j); /* function declaration */
int main(void) {
  char ch;
  int i, j;
  printf("This program displays the character in columns and rows.\n");
  printf("Enter the character: ");
  scanf("%c", &ch);
  printf("Now enter the columns value (integer): ");
  scanf("%d", &i);
  printf("Now enter the rows value (integer): ");
  scanf("%d", &j);
  row_char(ch, i, j);
  return 0;
}
void row_char(char ch, int i, int j) { /* function definition */
  int x, y;
  for (x = 0; x < i; x++) {     /* for columns */
    for (y = 0; y < j; y++) {   /* for rows */
      printf("%c ", ch);
    }
    printf("\n");
  }
}
