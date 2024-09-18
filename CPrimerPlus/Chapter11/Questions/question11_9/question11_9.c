/* Function input() suggested in that chapter can be written by using pointer
  notation instead of the array notation, which will allow for eliminating the
  i variable. Make that modification.
*/
#include <stdio.h>
char * input(char *c, int number);
int main(void)
{
  char array[50];
  char * copy_array;
  copy_array = input(array, 50);
  puts(array);
  puts(copy_array);
  return 0;
}
char * input(char *c, int number)
{
  char * result;

  result = fgets(c, number, stdin);
  if (result) // result different from NULL
  {
    while (*c != '\n' && *c != '\0')
    {
      c++;
    }
    if (*c == '\n')
    {
      *c = '\0'; // newline -> null character
    }
    else
    {
      while (getchar() != '\n')
      {
        continue;
      }
    }
  }
  return result;
}
