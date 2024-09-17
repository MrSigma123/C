/* Why the following attempt to declare the string is unsuccessful? */
#include <stdio.h>
int main(void)
{
  char name[] = {'A', 'n', 'n', 'a'};
  printf("char name[] = {'A', 'n', 'n', 'a'} is not a string. It's an character "
         "array.\n");
  printf("There should be added an \'\\0\' to create the string by using "
         "mentioned notation.\n");
  printf("%s", name); // might crash
  return 0;
}
