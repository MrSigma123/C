/* What problems might occur while simultaneous using numerical
  and character input if the system uses buffering? */
#include <stdio.h>
int main(void) {
  printf("There might happen data loss. The input consisted from several\n");
  printf("types might be read in improper way. In example if the first data type\n");
  printf("was the string or stream of characters there is a risk of treating proceeding\n");
  printf("data types as character types as well which results in data loss.\n");
  printf("Functions like scanf() ignores whitespace characters. While using\n");
  printf("macros like getchar() there is a risk of reading the whitespace character\n");
  printf("as intended character, which obviously is not always desired.\n");
  printf("To prevent this there is a need to be aware of the current buffer state. In\n");
  printf("some cases to prevent above mentioned problems the buffer has to be cleared manually.\n");
  return 0;
}
