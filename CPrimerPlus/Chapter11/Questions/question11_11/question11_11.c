/* The input() function suggested in that chapter can be written with the usage
  of strch() function instead of using the while loop in which we are looking
  for the newline character. Make such modification.
*/
#include <stdio.h>
#include <string.h> // for strch() function
char * input(char *c, int number);
int main(void)
{
  char string[81];
  
  printf("Enter the string:\n");
  input(string, 81);
  printf("Testing the input:\n");
  puts(string);
  
  return 0;
}
char * input(char *c, int number)
{
  char * result;
  char * newline;

  result = fgets(c, number, stdin);
  if (result) // result different from NULL
  {
     newline = strchr(c, '\n');

    if (newline)
    {
      *newline = '\0'; // newline -> null character
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

