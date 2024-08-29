/*
Let's assume you have the following declarations:
float beer[10], things[10][5], *pe, value = 2.2;
int i = 3;
Specify each of the following instructions as correct or incorrect:
a) beer[2] = value;
b) scanf("%f", &beer)
c) beer = value;
d) printf("%f", beer);
e) things[5] = beer;
g) pe = value;
h) pe = beer;
*/
#include <stdio.h>
int main(void)
{
  float beer[10], things[10][5], *pe, value = 2.2;
  int i = 3;
  beer[2] = value;
  printf("beer[2] = value is OK\n");
  scanf("%f", &beer); 
  printf("scanf(\"%%f\", &beer) is FALSE, undefined behavior\n");
  beer = value;
  printf("beer = value is FALSE, can't assign float to the pointer\n");
  printf("%f", beer);
  printf("printf(\"%%f\", beer) is FALSE, undefined behaviour\n");
  things[5] = beer;
  printf("things[5] = beer is FALSE, can't assing pointer to the float\n");
  pe = value;
  printf("pe = value is FALSE, can't assign the float to the pointer\n");
  pe = beer;
  printf("pe = beer is OK\n");
  return 0;
}
