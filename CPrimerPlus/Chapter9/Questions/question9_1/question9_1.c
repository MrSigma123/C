/* What is the difference between function argument and parameter? */
#include <stdio.h>
int main(void) {
  printf("Function argument is the value received by a function from another\n");
  printf("function, from which the function which received an argument was called.\n");
  printf("The parameter is a copy of the function argument, which represents the\n");
  printf("object inside called function, which can not be accessed outside that\n");
  printf("called function. The parameters are declared inside called function.\n");
  return 0;
}
