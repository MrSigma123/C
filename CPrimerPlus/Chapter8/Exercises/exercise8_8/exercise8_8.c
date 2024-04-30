/* Write a pgrogram which displays menu with it's following functionalities:
  addition, subtraction, multiplication and divisioin. After the user will make
  her/his choice the program should ask about two numbers and then perform the
  mathematical operation specified by the choice made by the user. The program
  should accept only available choice options. Use float data type to store the
  number values and let the user to try again if he will make a mistake during
  inputting data. In case of division if the user will prompt 0 as the denominator
  there should appear a message which asks about entering different value. The
  program execution should result in the following result:
  
  Choose one of the following mathematical operations:
  a. addition          b. subtraction
  c. multiplication    d. division
  q. quit
  a
  Enter first number: 22.4
  Enter second number: one
  one is not a number.
  Enter a number, i.e. 2.5, -178E8 or 3: 1
  22.4 + 1 = 23.4
  Choose one of the following mathematical operations:
  a. addition          b. subtraction
  c. multiplication    d. division
  q. quit
  d
  Enter first number: 18.4
  Enter second number: 0
  Enter second number different than 0: 0.2
  18.4 / 0.2 = 92
  Choose one of the following mathematical operations:
  a. addition          b. subtraction
  c. multiplication    d. division
  q. quit
  q
  You've chosed the option to quit. The program ends here.
  */

#include <stdio.h>
#include <ctype.h>

void menu(void);
char take_first_printed_char(void);
float getfloat(void);
float addition(void);
float subtraction(void);
float multiplication(void);
float division(void);

int main(void) {
  menu();

  return 0;
}

void menu(void) {
  char choice = 'x'; // assume default switch case
  do {
    printf("Choose one of the following mathematical operations:\n");
    printf("a. addition          b. subtraction\n");
    printf("c. multiplication    d. division\n");
    printf("q. quit\n");
    choice = take_first_printed_char();
    switch(choice) {
      case 'a' :
        addition();
        break;
      case 'b' :
        subtraction();
        break;
      case 'c' :
        multiplication();
        break;
      case 'd' :
        division();
        break;
      case 'q' :
        printf("You've chosed the option to quit. The program ends here.\n");
        break;
      default  :
        printf("Unrecognized option, try again...\n");
    } 
  } while (choice != 'q');
}

char take_first_printed_char(void) {
  char ch;
  ch = getchar();
  while(isspace(ch) != 0) {
    ch = getchar();
  }
  while(getchar() != '\n') { // to eliminate the rest of input stream
    continue;
  }
  return ch;
}

float getfloat(void) {
  float input;
  char character; // to store non int data type

  while (scanf("%f", &input) != 1) {;
    while ((character = getchar()) != '\n') {
      putchar(character); // ommits and display wrong data
    }
    printf(" is not an floating point numerical value.\nPlease enter ");
    printf("floating point numberical value: i.e.  2.5, -178E8 or 3: ");
  }

  return input;
}

float addition(void) {
  float val1, val2, result;
  printf("Enter first number: ");
  val1 = getfloat();
  printf("Enter second number: ");
  val2 = getfloat();
  result = val1 + val2;
  printf("%f + %f = %f\n", val1, val2, result);

  return result;
}

float subtraction(void) {
  float val1, val2, result;
  printf("Enter first number: ");
  val1 = getfloat();
  printf("Enter second number: ");
  val2 = getfloat();
  result = val1 - val2;
  printf("%f - %f = %f\n", val1, val2, result);

  return result;
}

float multiplication(void) {
  float val1, val2, result;
  printf("Enter first number: ");
  val1 = getfloat();
  printf("Enter second number: ");
  val2 = getfloat();
  result = val1 * val2;
  printf("%f * %f = %f\n", val1, val2, result);

  return result;
}

float division(void) {
  float val1, val2, result;
  printf("Enter first number: ");
  val1 = getfloat();
  printf("Enter second number: ");
  val2 = getfloat();
  if (val2 == 0) {
    do {
      printf("Enter second number different than 0: ");
      scanf("%f", &val2);
    } while (val2 == 0);
  }
  result = val1 / val2;
  printf("%f / %f = %f\n", val1, val2, result);

  return result;
}
