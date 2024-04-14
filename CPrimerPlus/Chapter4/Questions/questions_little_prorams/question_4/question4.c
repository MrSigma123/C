#include <stdio.h>
#define P "shame"
#define X 10
int main(void)
  {
  int age;
  int xp;
  char name[20];

  printf("Enter your name.\n: ");
  scanf("%s", name);
  printf("It's all ringht, %s, how old are you?\n: ", name);
  scanf("%d", &age);
  xp = age + X;
  printf("What a %s! You have to have to be at least %d years old.\n", P, xp);
  return 0;
}
