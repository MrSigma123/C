/* Modify exercise 8 from chapter7 in a way to make the menu options
  marked as letters instead of numbers (i.e. to quit the program there
  should be used letter q instead of number 5) */
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
  char option = ' '; // empty as default
  printf("This program calculates your income.\n");
  printf("Enter how many hours did you worked this week (0 to exit): ");
  while (scanf("%lf", &hours) && hours != 0) { // character imput will be read as 0
    getchar(); // works as buffer flush by taking newline character stored in buffered input after previous scanf("%d")
    printf("%s\n", STARS);
    printf("Choose the desired value of your income per hour (enter character):\n");
    printf("a) 35$/h.                          b) 37$/h.\n");
    printf("c) 40$/h.                          d) 45$/h.\n");
    printf("q) quit\n");
    printf("%s", STARS);
    do {
      printf("\nYour choice: ");
      scanf("%c", &option);
      getchar(); // to not take newline as an input, like above, we do that manually instead using fflush() or space before 
      switch (option) {                                                      // like scanf(" %c", &x) for training purposes
        case 'a' :
          income_per_hour = 35.0;
          break;
        case 'b' :
          income_per_hour = 37.0;
          break;
        case 'c' :
          income_per_hour = 40.0;
          break;
        case 'd' :
          income_per_hour = 45.0;
          break;
        case 'q' :
          printf("You've entered option to quit. Program ends here...\n");
          printf("Goodbye!\n");
          return 0;
        default:
          printf("Unrecognized input, try again...\n");
          continue;
      }
    } while (option < 'a' || option > 'd' && option != 'q');
    income_brutto = hours * income_per_hour;
    if (income_brutto <= TAX_TRESHOLD1) { // cautious, TAX_TRESHOLD1 must be included
      tax = TAX_VALUE1 * income_brutto;
    } else if (income_brutto > TAX_TRESHOLD1 && income_brutto <= TAX_TRESHOLD2) { // TAX_TRESHOLD2 as well
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
  printf("You've entered 0 or improper character, program ends here.\n");
    return 0;
}
