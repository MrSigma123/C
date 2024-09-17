/* Here is an exercise which helps with getting familiar with strings, loops
  and pointers. Let's assume that we have the following function declaration:
*/
#include <stdio.h>
char *pr(char *str);
int main(void)
{
  /* 
  Consider the following function call:
  x = pr("Ho Ho Ho!");

  a) what will be displayed?
  b) what type should the variable x have?
  c) what value is passed to x?
  d) What means the expression *--p and what its difference with *--p?
  e) What would be displayed if the expression *--p would be replaced with
    *p--?
  f) What both while loop test conditions check?
  g) What will happen if the pr() function argument would be empty string?
  h) What should be done in calling function to make pr() function be able
    to be used as in above-mentioned example?
  */
}
char *pr(char *str) // here is the mentioned function code
{
  char *p;
  p = str;
  while (*p)
    putchar(*p++);
  do
  {
    putchar(*--p);
  } while (p - str);
  return (p);
}

