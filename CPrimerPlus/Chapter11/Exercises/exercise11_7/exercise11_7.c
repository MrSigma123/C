/*
  Function strncpy(s1, s2, n) copies from s2 to s1 exactly n
  characters, in case of exceedung the character amount by
  shortening s2 string or adding to it '\0' characters. The result
  string can end with other character than '\0' if s2 length is n
  or more. The return value is s1. Write your own implementation
  of that function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 81

char * strncpy_v2(char dest[], char source[], int n);
void print_array(char array[], int size);

int main(void){
  char s1[SIZE];
  char s2[SIZE];
  char * result;
  int char_amount;
  
  printf("This program will include a fuction which will copy s1 into s2.\n");
  printf("The function will be tested on various data in a loop.\n");
  printf("(To close the program type EXIT as s1 and s2)\n");

  while(1){
    printf("\nEnter the s1: ");
    scanf(" %s", s1);
    printf("Enter the s2: ");
    scanf(" %s", s2);
    if (strcmp(s1,s2) == 0 && strcmp(s1, "EXIT") == 0){
      break;
    }
    printf("Enter the number of characters to be copied: ");
    scanf(" %d", &char_amount);
    result = strncpy(s1, s2, char_amount);
    print_array(result, char_amount);
  }

  return 0;
}

char * strncpy_v2(char dest[], char source[], int n){
  int i;
  while (i<n && source[i]!='\0'){
    dest[i] = source[i];
    i++;
  }
  while (i<n){
    dest[i++] = '\0';
  }
  return dest;
}

void print_array(char array[], int size){
  int i;
  for (i=0; i<size; i++){
    printf("%c", array[i]);
  }
}
