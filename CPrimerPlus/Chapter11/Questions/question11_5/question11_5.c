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
    // string "Ho Ho Ho!!oH oH oH"
  b) what type should the variable x have?
    // the char pointer type, char *
  c) what value is passed to x?
    // pointer to the "Ho Ho Ho!! oH oH oH" string, so the first capital H letter
    // address
  d) What means the expression *--p and what its difference with --*p?
    // the *--p expression points to the different addres, exactly one memory
    // unit (char type) before the p, by decreasing the pointer
    // the --*p decrease the pointed value by one (in char case changes the
    // ASCII code value by one)
  e) What would be displayed if the expression *--p would be replaced with
    *p--?
    //there would be displayed Ho Ho Ho!!oH oH o (without the last O)
  f) What both while loop test conditions check?
    // those condition checks ifi the string reach its very end
    // first loop checks the last element, loop works until '\0' appear
    // second loop checks the beginning of the array by the difference
    // if the difference equals to 0 the loop breakes
  g) What will happen if the pr() function argument would be an empty string?
    // the first loop is skipped, the second loop decreases the pointed value
    // by one and interprets it as an character. The process is infinite and
    // has to be stopped by the user
  h) What should be done in calling function to make pr() function be able
    to be used as in above-mentioned example?
    // to declare this function as char *pr(char *)
  */
  char *x;
  x = pr("Ho Ho Ho!");
  return 0;
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

