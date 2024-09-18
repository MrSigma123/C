/* We have the following declaration:
  char character = '$';
How many memory bytes are required by the character variable? What in case of
'$' and what in case of "$"?
*/
#include <stdio.h>
int main(void)
{
  char character = '$';
  printf("sizeof character variable ('$') = %zd\n", sizeof(character));
  
  char new_character[2] = "$";
  printf("sizeof new_character variable (\"$\") = %zd\n", sizeof(new_character));
  
  /*
  In the case of '$', the character variable needs one byte of memory.
  In the case of "$", the string requires two bytes of memory:
  1 byte for the '$' character and 1 byte for the null terminator '\0'.
  */
  
  return 0;
}

