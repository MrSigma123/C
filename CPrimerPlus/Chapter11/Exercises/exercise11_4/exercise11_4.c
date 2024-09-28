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
void get_first_word(char * word, int characters);
int main(void)
{
  char first_word[81];
  int chars;
  
  printf("How many characters do you want to read? Enter the value: ");
  scanf("%d", &chars);
  getchar(); // discard newline

  while (chars <= 0 || chars >= 81)
  {
    printf("\nYou can enter from 1 to 80 characters.\n");
    printf("Please enter again the number of characters to be read: ");
    scanf("%d", &chars);
    getchar(); // discard newline
  }

  get_first_word(first_word, chars);
  printf("The first word is \"%s\"\n", first_word);
  return 0;
}
void get_first_word(char * word, int characters)
{
  char ch;
  int counter = 0;

  printf("Enter the stream of characters:\n");
  ch = getchar();

  while (ch == '\n' || ch == '\t' || ch == ' ')
  {
    ch = getchar(); // skips any non printable characters
  }

  while (ch != EOF && ch != '\n' && ch != '\t' && ch != ' '
    && counter < characters)
  {
    *word++ = ch;
    counter++;
    ch = getchar();
  }
  
  *word = '\0'; // close the string
  
    while (ch != '\n' && ch != EOF)
  {
    ch = getchar(); // skip all remaining characters
  }
}

