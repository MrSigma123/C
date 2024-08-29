/* What value range can the offset of 10 element array have? */
#include <stdio.h>
int main(void)
{
  int array[10];
  int i;
  for (i = 0; i < 10; i++)
  {
    printf("%d ", array[i]); // random values
  }
  printf("\nThe 10 element array (of any type) offset can have the range\n");
  printf("from 0 to 9, because the first index value is 0 and the last\n");
  printf("index value is n-1, where n is the number of array elements.");
  return 0;
}
