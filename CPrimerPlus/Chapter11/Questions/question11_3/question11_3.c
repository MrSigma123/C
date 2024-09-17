/* What the following program will display? */
#include <stdio.h>
#include <string.h>
int main(void)
{
  char food[] = "Yummy!";
  char *ptr;
  ptr = food + strlen(food); // points to '\0'
  while (--ptr >= food)
    puts(ptr);
  return 0;
  /* 
  Displayed values:
  !
  y!
  my!
  mmy!
  ummy!
  Yummy!
  */
}
