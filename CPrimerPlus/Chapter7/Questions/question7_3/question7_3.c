/* The program below contains overcomplicated relational expressions
  and also some basic errors. Siplify and correct that program. */
#include <stdio.h>
int main(void) {
  int weight, height;
  printf("Enter your weight (kg) and height (cm): ");
  scanf(" %d %d", &weight, &height);            // add format specifier and & operator
  if (weight < 45 && height > 135){             // add opening bracket
    if (height >= 182)
      printf("You are very tall for your weight.\n");
    else if (height < 182 && height > 163)      // add missing height variable
      printf("You are tall for your weight.\n");
    else                                        // create additional else statement
      printf("You are probably still groiwng!\n");
  }                                             // add closing bracket
  else if (weight > 135 && height < 122)        // removed unnecessary duplicate expression
    // if (!(height >= 122))                    // remove unnecesary condition
    printf("You're quite short as for your weight.n\n");
  else
    printf("Your weight is perfect.\n");

  return 0;
}
