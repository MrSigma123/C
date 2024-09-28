/*
Design and test the function from the exercise11_3, which additionally
takes a limit on the input characters as a parameter.
*/
// below is the code form the previous exercise
/*
Design a function that reads input and stores the first word into the passed 
array, ignoring the rest of the string. The function should skip any leading 
space characters. A word is defined as a sequence of characters that does not 
include spaces, tabs, or newline characters. Use the getchar() function.
*/
#include <stdio.h>
void get_first_word(char * word);
int main(void)
{
  char first_word[81];
  get_first_word(first_word);
  printf("The first word is \"%s\"\n", first_word);
  return 0;
}
void get_first_word(char * word)
{
  char ch;

  printf("Enter the stream of characters:\n");
  ch = getchar();

  while (ch == '\n' || ch == '\t' || ch == ' ')
  {
    ch = getchar(); // skips any non printable characters
  }
  
  while (ch != EOF && ch != '\n' && ch != '\t' && ch != ' ')
  {
    *word++ = ch;
    ch = getchar();
  }
  
  *word = '\0'; // close the string
  
    while (ch != '\n' && ch != EOF)
  {
    ch = getchar(); // skip all remaining characters
  }
}

