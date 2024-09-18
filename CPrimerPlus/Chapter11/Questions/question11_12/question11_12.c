/* Design a function that takes a pointer to a string as an argument
  and returns a pointer to the first space character in the string.
  If there is no space character, the function should return a NULL pointer.
*/
#include <stdio.h>
#include <string.h>

char * input(char * c, int number);
char * find_space(char * str);

int main(void)
{
  char string[81];
  char * space;

  printf("Enter a string:\n");
  input(string, 81);
  
  space = find_space(string);

  if (space)
  {
    printf("There first space character in your string is at %p\n",
          space);
  }
  else
  {
    printf("There aren't any space characters in that string.\n");
  }

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

char * find_space(char * str)
{
  while (*str != ' ' && *str != '\0')
  {
    str++;
  }
  return (*str == ' ') ? str : NULL;
}
