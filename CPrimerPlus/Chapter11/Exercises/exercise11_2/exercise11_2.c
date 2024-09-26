/*
Modify the function from the exercise11_1 in such way to make it end its work
after reading n characters or after detecting the occurrence of the first space
character. (Don't use the scanf() function).
*/
// the code to be modified
/* Design a function that takes the most recent n characters from the keyboard 
   (including spaces, tabs, and newline characters) and writes the result into 
   an array that is passed by reference as a function argument.
*/
#include <stdio.h>

void grab_n_stdin_chars(char * array, int n);

int main(void)
{
  char string[81];
  int n;

  printf("How many characters the function should take from the input?\n");
  printf("Enter the value: ");
  scanf("%d ", &n);

  if (n > 80)
  {
    printf("You can input up to 80 characters.\n");
    return 1;
  }
  
  grab_n_stdin_chars(string, n);
  
  printf("Here is your charcter array:\n");
  printf("%s", string);
  
  return 0;
}

void grab_n_stdin_chars(char * array, int n)
{
  int i = 0;
  char ch = '0';

  while (i < n) // for handling newline character
  {
    ch = getchar();

    if (ch == EOF) // end of file handling
    {
      break;
    }

    array[i] = ch;
    i++;
  }

  array[i] = '\0'; // ensure the array is null-terminated
}

