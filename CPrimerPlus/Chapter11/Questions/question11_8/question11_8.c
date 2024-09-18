/* What the following program will display? */
#include <stdio.h>
int main(void)
{
  char str1[] = "gawsie";
  char str2[] = "bletonizm";
  char *p1;
  int i = 0;
  for (p1 = str1; *p1 != '\0'; p1++)
  {
    if (*p1 == 'a' || *p1 == 'e')
    {
      putchar(*p1);
    }
    else
    {
      (*p1)--;
    }
    putchar(*p1);
  }
  putchar('\n');
  while (str2[i] != '\0')
  {
    printf("%c", i % 3 ? str2[i] : '*');
    ++i;
  }
  /*
  Displayed content:
  faavrhee
  *le*on*zm*
  */
  return 0;
}
