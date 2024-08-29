/* Declare an int type array of the size 800 * 600 */
#include <stdio.h>
int main(void)
{
  int array[800][600];
  int i, j;
  for (i = 0; i < 800; i++)
  {
    for (j = 0; j < 600; j++)
    {
      printf("%d ", array[i][j]);
    }
  }
  return 0;
}
