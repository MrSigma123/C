/* Write the condition in C programming language to check if: */
#include <stdio.h>
int main(void){
  char ch;
  int test;
  int x = 21;
  printf("// A: ANSWER, R: RESULT\n");
  printf("Enter a single character: ");
  test = scanf("%c", &ch);
  printf("a) scanf() successfully reads single char letter;\n");
  printf("A: scanf(\"%%c\") == 1, R: %d\n", test);
  printf("b) x is not equal to 5; A: x != 5, R: %d\n", x != 5);
  printf("c) x is equal to 20 or more; A: x > 20, R: %d\n", x > 20);\
  return 0;
}
