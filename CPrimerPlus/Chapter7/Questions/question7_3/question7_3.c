/* The program below contains overcomplicated relational expressions
  and also some basic errors. Siplify and correct that program. */
#include <stdio.h>
int main(void) {
  int weight, height;

  scanf("%d", weight, height);
  if (weight < 45 && height > 135)
    if (height >= 182)
      printf("You are very tall for your weight.\n");
    else if (height < 182 && > 163)
      printf("You are tall for your weight.\n");
  else if (weight > 135 && ! (weight <= 135)
           && height < 122)
    if (!(height >= 122))
      printf("You're quite short as for your weight.n\n");
  else
    printf("Your weight is perfect.\n");

  return 0;
}
