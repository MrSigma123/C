/* Let's assume we have the program from the previous question
  named "count". Which of the following statements are correct? */
#include <stdio.h>
int main(void) {
  printf("a) essay_count <essay; A: Incorrect, \n"
         "the operators < > can't be used with just two text files \n");
  printf("b) count essay;        A: Incorrect, \n"
         "there isn't any < > operator between executable and input stream file\n");
  printf("c) essay >count;       A: Incorrect, \n"
         "reverse order of the operands");
  return 0;
}
