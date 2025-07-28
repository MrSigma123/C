/*
  Write a function include_str(), which takes as arguments
  two string pointers. If second string is present inside first
  the function should return the address where that string is
  present. In example calling include_str("pula", "ul") should
  return the address of the letter u in the word "pula". If
  second string is not present inside the first one the return
  value should be NULL.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 81

char * include_str(char * string_1, char * string_2);

int main(void){
  char string1[SIZE], string2[SIZE];
  char * result = NULL; // address of the result
  printf("This program checks if the second entered string is present"
         "inside the first string.\n");
  printf("The program will test various data untill three dots will occur\n");

  while(1){
    printf("Enter the first string: ");
    fgets(string1, SIZE, stdin);
    string1[strcspn(string1, "\n")] = '\0';
    if (strcmp(string1, "...") == 0){
      printf("You've entered exid condition. The program ends here.\n");
      break;
    }
    printf("Enter the second string: ");
    fgets(string2, SIZE, stdin);
    string1[strcspn(string2, "\n")] = '\0';
    if (strcmp(string2, "...") == 0){
      printf("You've entered exid condition. The program ends here.\n");
      break;
    }
   
    result = include_str(string1, string2);
    
    if (result == NULL){
      printf("The string2 is not present in string1.\n");
    }
    else{
      printf("The string2 is present in string2.\n");
      printf("The beginning of the string starts at %p.\n",
             result);
    }
  }

  return 0;
}

char * include_str(char * string_1, char * string_2){
  int flag_string_start = 0;
  char * target_address;
  int i;

  for (i=0; *(string_1+i) != '\0' || *string_2+i != '\0'; i++){
    if (*(string_1+i) == *(string_2+i)){
      flag_string_start = 1;
      target_address = (string_1+i);
    }
    else{
    flag_string_start = 0;
    }
  }

  if (flag_string_start == 1){
    return target_address;
  }

  return NULL;
}
