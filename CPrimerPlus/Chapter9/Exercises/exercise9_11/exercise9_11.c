/* Write and test Fibonacci() which instead recursion to calculate
  next term of the sequence uses the loop. */

#include <stdio.h>

int fibonacci(int num_seq);

int main(void) {
  int number_in_seq;
  printf("This program finds the fibonacci sequence numbers.\n");
  printf("Which number in fibonacci sequence do you want to find?\n");
  printf("Enter the number in sequence: ");
  scanf("%d", &number_in_seq);
  printf("The %dst/nd/th number in fibonacci sequence is %d.\n",
         number_in_seq, fibonacci(number_in_seq));
}

int fibonacci(int num_seq) {
  if (num_seq == 0) {
    return 0;
  }
  int current = 1;
  int next = 1;
  int prev = 0;
  int i;
  for (i = 1; i < num_seq; i++) {
    next = current + prev;
    prev = current;
    current = next;
  }
  return current;
}
