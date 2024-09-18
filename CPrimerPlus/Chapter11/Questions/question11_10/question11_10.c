/* Function strlen() takes as an argument the pointer to the string (takes
  the name of the string) and returns the string length. Write your own version
  of that function.
*/
#include <stdio.h>
char * input(char *c, int number);
unsigned int string_length(const char * string);
int main(void)
{
  char string[81];
  
  printf("Enter the string:\n");
  input(string, 81);
  printf("The entered string has %u characters.\n", string_length(string));
  
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
unsigned int string_length(const char * string)
{
  unsigned int count = 0;
  while (*string++ != '\0')
  {
    count++;
  }
  return count;
}
