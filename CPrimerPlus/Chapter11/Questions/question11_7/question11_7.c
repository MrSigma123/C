/* What the following program will display? */
#include <stdio.h>
#include <string.h>
#define T1 "How do you feel, baby? "
char T2[40] = "Win with the time.";
char * T3 = "chat";
int main(void)
{
  char words[80];
  printf(T1);
  puts(T1);
  puts(T2);
  puts(T2 + 1);
  strcpy(words, T2);
  strcat(words, " Win a toy.");
  puts(words);
  while (*T3)
    puts(T3++);
  puts(--T3);
  T3 = T1;
  puts(T3);
  /*
  Display results:
  How do you feel, baby? How do you feel baby?
  Win with the time.
  in with the time.
  Win with the time. Win a toy.
  chat
  hat
  at
  t
  t
  How do you feel, baby?
  */
  return 0;
}
