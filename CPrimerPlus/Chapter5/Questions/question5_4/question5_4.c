// You suspect that the following program has some errors. Can you find them?
#include <stdio.h>
int main(void){
  int i = 1;  // lacking semicolon instead of comma character
  float n;
  printf("Warning! Incoming fractions!\n");
  while (i < 30){ // lacking curly brackets
    n = (float)1/i++;    // lacking incrementation and castiong operator
    printf("%f\n", n);   // added \n for iproved readability
  }
  printf("That's all for now.\n");
  return 0;
}
