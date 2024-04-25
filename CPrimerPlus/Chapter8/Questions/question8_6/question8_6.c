/* What will be the result after running the following code snippets
  with indicated input data (assume that ch is an int variable and the
  input is buffered)? */
#include <stdio.h>
int main(void) {
  printf("a) INPIUT: \"If you will go, I'll go to.[enter]\"\n");
  printf("   CODE:\n");
  printf("   while ((ch = getchar()) != 't')\n");
  printf("     putchar(ch);");
  printf("   A: \"If you will go, I'll go\"\n");
  printf("b) INPUT: \"Harhar[enter]\"\n");
  printf("   CODE:\n");
  printf("   while ((ch = getchar()) != '\\n')\n");
  printf("   {\n");
  printf("     putchar(ch++);\n");
  printf("     putchar(++ch);\n");
  printf("   }\n");
  printf("   A: \"HJacrthjacrt\"");
  return 0;
}
