/* overflow behaviour testing on my computer */
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
  printf("Testing int type overflow %d %d %d\n", INT_MAX-1, INT_MAX, INT_MAX+1);
  printf("Testing float type overflow %e %e %e\n", FLT_MAX-1.0, FLT_MAX, FLT_MAX+1.0);
  printf("Testing underflow of float type %e %e %e\n", FLT_MIN + 1.0, FLT_MIN, FLT_MIN - 1.0);
  return 0;
}
