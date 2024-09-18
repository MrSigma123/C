/* Rewrite the program from Listing 11.21 using functions
  from the ctype.h library to make the program recognize every correct answer
  provided by the user, regardless of letter case.
*/
/* compare.c -- this works */ // provided code
#include <stdio.h>
#include <string.h> /* declares strcmp() */
#include <ctype.h> // for tolower() function
#define ANSWER "grant" // change for lowercase
#define MAX 40

char *input(char *c, int size);
char *to_lower_str(char * string);

int main(void)
{
  char test[MAX];
  puts("Who is buried inside Grant's tomb?");
  input(test, MAX);
  to_lower_str(test);
  
  while (strcmp(test, ANSWER) != 0)
  {
    puts("Unfortunately it's not a correct answer. Try again.");
    input(test, MAX);
    to_lower_str(test);
  }
  puts("That's right!");
  return 0;
}

char *input(char *c, int size)
{
  char * result;
  int i = 0;

  result = fgets(c, size, stdin);
  if (result) // result different than NULL
  {
    while (c[i] != '\n' && c[i] != '\0')
    {
      i++;
    }
    if (c[i] == '\n')
    {
      c[i] = '\0'; // newline character -> empty character 
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

char *to_lower_str(char * string)
{
  char * start = string;
  while (*string != '\0')
  {
    *string = tolower(*string);
    string++;
  }
  return start;
}
