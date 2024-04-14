// If the following code snippets would be the part of a whole program
// what would be the effect of their execution?
#include <stdio.h>
int main(void){ // using switch to fit three code snippets in one program
  int mode;     // to store the value used in switch  
  while(1){
    printf("Enter the mode (1, 2, 3 or 0 to exit): ");
    scanf("%d", &mode);
    switch(mode){
      case 1: { // will print the values 1 and 2
        int x = 0;
        while (++x <3)
          printf("%4d", x);
      } printf("\n"); break;
      case 2: { // will print the values 101 102 103, each in newline
        int x = 100;
        while (x++ < 103)
          printf("%4d\n", x);
      } break;
      case 3: { // will print consecutive letters from s to w
        char ch = 's';
        while (ch < 'w')
        {
          printf("%c", ch);
          ch++;
        }
        printf("%c\n", ch);
      } break;
      case 0: {
        printf("Exiting...\n");
        return 0;
      }
      default: {
        printf("Unrecognizable value, exiting...\n");
        return 0;
      }
    }
  }
  return 0;
}
