/* What the following program will display? */
#include <stdio.h>
int main(void) {
  int n, m;
  printf("A:\n");
  printf("31|32|33|34\n");
  printf("1\n5\n9\n13\n");
  printf("\n***\n");
  printf("2 6\n4 8\n8 10\n");
  printf("\n***\n");
  printf("===\n==\n=\n\n\n");
  n = 30;
  while (++n <= 33)
    printf("%d|", n);
  do
    printf("%d", n);
  while (++n <= 33);

  printf("\n");

  for (n = 1; n*n < 200; n += 4)
    printf("%d\n", n);
  printf("\n***\n");

  for (n = 2, m = 6; n < m; n *= 2, m += 2)
    printf("%d %d\n", n, m);

  printf("\n***\n");

  for (n = 5; n > 0; n--) {
    for (m = 3; m <= n; m++)
      printf("=");
    printf("\n");
  }
  return 0;
}
