/* simple program, which uses smile function severa tiems */
#include <stdio.h>
void smile(void);
int main(void){
  smile();
  smile();
  smile();
  printf("\n");
  smile();
  smile();
  printf("\n");
  smile();
  printf("\n");
  return 0;
}
void smile(void){
  printf("Smile!");
}
