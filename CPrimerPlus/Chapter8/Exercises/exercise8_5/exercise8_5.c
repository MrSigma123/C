/* Change the program from listing 8.4 in such way that the program
  will use more intelligent strategy of guessing. At the beginning
  the program should ask the user if the searched number is greater,
  smaller or equal to 50. If the searched number is greater then the
  next guess should be 75 which is placed halfway in between 50 and 100.
  If 75 is too large then the next guess should be the value between 75
  and 50, and so on. The following method which is called "dual search"
  allows for finding the guess quite quickly if the user is not cheating. */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
  char answer;
  int guess = 50;   // starting value
  int limit_lower = 1;
  int limit_upper = 100;
  bool greater = 1; // assume it's not the guessed value
  bool smaller = 1; // like above

  printf("This program guesses which value you've chosen within the range from 1 to 100.\n");
  while (smaller == 1 || greater == 1) {
    greater = 0;
    smaller = 0;
    printf("Is it %d? If not please type Y (yes), < (smaller), or > (greater) character to continue: ", guess);
    scanf(" %c", &answer);
    if (answer == 'Y' || answer == 'y') {
      printf("Hooray! I knew that I can guess your number.\n");
      break;
    } else if (answer == '<') {
      smaller = true;
      limit_upper = guess;
      guess = (guess + limit_lower) / 2;
    } else if (answer == '>') {
      greater = true;
      limit_lower = guess;
      guess = (guess + limit_upper + 1) / 2;
    } else {
      while (answer == 'y' && answer == 'Y' && answer == '<' && answer == '>') {
        printf("Unrecognized character. Please type the character again: Y (yes), < (smaller), or > (greater) character to continue: ");
        scanf(" %c", &answer);
      }
    }
  }

  return 0;
}
