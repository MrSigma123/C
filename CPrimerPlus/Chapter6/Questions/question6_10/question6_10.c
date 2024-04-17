/* Answer the questions about the declaration below: */
#include <stdio.h>
#include <string.h>
int main(void) {
  double mint[10];
  char answer[8];
  char answerA[5] = "mint";
  char answerB[3] = "10";
  char answerC[7] = "double";
  char answerD[4] = "i";
  printf("\tdouble mint[10];\n");
  printf("a) What is the name of that array?\n");
  scanf("%s", answer);
  if (strcmp(answer, answerA) == 0)
    printf("Good!\n");
  else
    printf("Bad!\n");
  printf("b) How many elements are stored in this variable?\n");
  scanf("%s", answer);
  if (strcmp(answer, answerB) == 0)
    printf("Good!\n");
  else
    printf("Bad!\n");
  printf("c) What type of values can be stored in each element?\n");
  scanf("%s", answer);
  if (strcmp(answer, answerC) == 0)
    printf("Good!\n");
  else
    printf("Bad!\n");
  printf("d) Which of the following lines represents correct usage of scanf()?\n");
  printf("i)   scanf(\"%%lf\", mint[2])\n");
  printf("ii)  scanf(\"%%lf\", &mint[2])\n");
  printf("iii) scanf(\"%%lf\", &mint)\n");
  scanf("%s", answer);
  if (strcmp(answer, answerD) == 0)
    printf("Good!\n");
  else
    printf("Bad!\n");
  return 0;
}
