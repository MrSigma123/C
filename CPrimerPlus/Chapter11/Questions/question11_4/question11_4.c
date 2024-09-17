/* What the following program will display? */
#include <stdio.h>
#include <string.h>
int main(void)
{
  char gold[40] = "iece of wood ";
  char samuel[40] = "I just read p";
  const char *quote = "to the end";
  strcat(gold, quote);
  strcat(samuel, gold);
  puts(samuel);
  return 0;
  /*
  Displayed values:
  I just read piece of wood to the end
  */
}
