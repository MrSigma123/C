/* Rewrite the program from Listing 11.21 using functions
  from the ctype.h library to make the program recognize every correct answer
  provided by the user, regardless of letter case.
*/
/* compare.c -- this works */ // provided code
#include <stdio.h>
#include <string.h> /* declares strcmp() */
#define ANSWER "Grant"
#define MAX 40
char *input(char *c, int size);

int main(void)
{
  char test[MAX];
  puts("Who is buried inside Grant's tomb?");
  input(test, MAX);
  while (strcmp(test, ANSWER) != 0)
  {
    puts("Unfortunately it's not a correct asnwer. Try again.");
    input(test, MAX);
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

