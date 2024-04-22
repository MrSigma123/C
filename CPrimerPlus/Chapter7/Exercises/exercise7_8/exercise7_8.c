/* Change assumption a) in exercise 7 to make the program
  displaying manu, which will enable the user to choose the
  value of income per hour (use switch statement). After running
  the program it should display something like below:
  *******************************************************
  Choose the value according to your desired income:
  1) 35$/h.                         2) 37$/h.
  3) 40$/h.                         4) 45$/h.
  5) quit
  ******************************************************* */
#include <stdio.h>
#define STARS "***********************************************************"
#define TAX_TRESHOLD1 1200
#define TAX_TRESHOLD2 (600 + TAX_TRESHOLD1)
#define TAX_VALUE1 0.15
#define TAX_VALUE2 0.20
#define TAX_VALUE3 0.25
int main(void) {
  double hours;
  double income_per_hour, income_brutto, income_netto, tax;
  int option = 0; // empty as default
  printf("This program calculates your income.\n");
  printf("Enter how many hours did you worked this week (0 to exit): ");
  while (scanf("%lf", &hours) && hours != 0) {
    printf("%s\n", STARS);
    printf("Choose the desired value of your income per hour (enter character):\n");
    printf("1) 35$/h.                          2) 37$/h.\n");
    printf("3) 40$/h.                          4) 45$/h.\n");
    printf("5) quit\n");
    printf("%s", STARS);
    do {
    printf("\nYour choice: ");
    scanf("%d", &option);
      switch (option) {
        case 1 :
          income_per_hour = 35.0;
          break;
        case 2 :
          income_per_hour = 37.0;
          break;
        case 3 :
          income_per_hour = 40.0;
          break;
        case 4 :
          income_per_hour = 45.0;
          break;
        case 5 :
          printf("You've entered option to quit. Program ends here...\n");
          printf("Goodbye!\n");
          return 0;
        default:
          printf("Unrecognized input, try again...\n");
          continue;
      }
    } while (option <= 0 || option > 5);
    income_brutto = hours * income_per_hour;
    if (income_brutto < TAX_TRESHOLD1) { // slight refactoring
      tax = TAX_VALUE1 * income_brutto;
    } else if (income_brutto > TAX_TRESHOLD1 && income_brutto < TAX_TRESHOLD2) {
      tax = TAX_TRESHOLD1 * TAX_VALUE1 + (income_brutto - TAX_TRESHOLD1) * TAX_VALUE2;
    } else {
      tax = TAX_TRESHOLD1 * TAX_VALUE1 + (TAX_TRESHOLD2 - TAX_TRESHOLD1) * TAX_VALUE2 +
          (income_brutto - TAX_TRESHOLD2) * TAX_VALUE3;
    } // adapting the rule of using curly brackets even for single statement inside if statement
    income_netto = income_brutto - tax;
    printf("\nYour result:\n");
    printf("Worked hours: %.1lf\n", hours);
    printf("Brutto income: $%.2lf\n", income_brutto);
    printf("Your tax value: $%.2lf\n", tax);
    printf("Netto income: $%.2lf\n", income_netto);

    printf("\nEnter another number of working hours to calculate brutto income\n");
    printf("tax and netto income: ");
  }
  printf("You've entered 0, program ends here.\n");
    return 0;
}
