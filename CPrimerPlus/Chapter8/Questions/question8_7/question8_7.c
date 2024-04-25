/* How C programming language handle the fact that different
  operating systems supports files in different ways and
  they present the newline character in different way too? */
#include <stdio.h>
int main(void) {
  printf("EOF and newline characters along different sequential\n"
         "commands are substituted by replacing their C code\n"
         "representations into their appropriate system equivalents.\n"
         "It's works in that way because of stdio library.\n");
  return 0;
}
