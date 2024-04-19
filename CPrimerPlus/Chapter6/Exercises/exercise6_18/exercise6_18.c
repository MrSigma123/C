/* Professor Popular joined recently new social portal. Initially 
  he had five friends. He noticed that the number of friends changes
  in accordance with following pattern: during the first day one
  friend disappeared and the number of the other friends has doubled.
  During second week two friends disappeared and the rest doubled
  their amount. Overall during Nth week N friends disappeared and
  the amount of rest doubled. Write a program which will calculate
  and display the number of friends during each week. The program
  should be performing calculations until the number of friends
  will exceed the Dunbar value. The Dunbar value is estimated number
  of the maximum amount of people in which every person in that group
  knows every other person from the group and know the relations between
  every person in the group (it's claimed to be around 150). */
#include <stdio.h>
int main(void) {
  int friends_amount, i;
  const int DUNBAR_VAL = 150;
  for (i = 1, friends_amount = 5; friends_amount < DUNBAR_VAL; i++) {
    friends_amount -= i;
    friends_amount *= 2;
    printf("Week %d:          friends amount: %d\n", i, friends_amount);
  }
  printf("To make the friend amount exceed Dunbar value Prof. Popular needs %d weeks.\n",
         i);
  return 0;
}
