/* Write a program which takes integers up to entering
  0 digit. After finishing taking the input data the program
  should display number of even numbers (excluding zero) and
  their arithmetic average and number of odd numbers and their
  arithmetic average as well. */
#include <stdio.h>
int main(void) {
  int input;
  int even_count = 0;
  int even_sum = 0;
  int odd_count = 0;
  int odd_sum = 0;
  double even_avg, odd_avg;
  const int STOP = 0;
  printf("This program analyzes integer input data (zero ends the input loop)\n");
  printf("Enter sequence of values:\n");
  while (scanf("%d", &input) && input != 0) {
    if (input % 2 == 0) {
      even_count++;
      even_sum += input;
    } else {
      odd_count++;
      odd_sum += input;
    }
  }
  even_avg = (double) even_sum / even_count;
  odd_avg = (double) odd_sum / odd_count;
  printf("There were %d even numbers, their average is %lf\n",
         even_count, even_avg);
  printf("There were %d odd numbers, their average is %lf\n",
         odd_count, odd_avg);
  return 0;
}
