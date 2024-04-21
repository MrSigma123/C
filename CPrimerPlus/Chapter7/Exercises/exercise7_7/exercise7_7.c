/* Writa a program which takes the number of worked hours in a week
  and then displays brutto income, tax and netto income. Assume the
  following data:
  a) basic income per hour = 40$
  b) overtime (over 40 hours per week) = 150% of basic income
  c) tax 15% for first 1200$
         20% for next 600$
         25% for income remainder
  Use constants #define and don't worry, that these data are not
  consistent with current tax regulations */
#include <stdio.h>
#define INCOME_PER_HOUR 40
#define TAX_TRESHOLD1 1200
#define TAX_TRESHOLD2 600 + TAX_TRESHOLD1
#define TAX_VALUE1 0.15
#define TAX_VALUE2 0.20
#define TAX_VALUE3 0.25
int main(void) {
  double hours;
  double income_brutto, income_netto, tax;
  printf("This program calculates your income.\n");
  printf("Enter how many hours did you worked this week (0 to exit): ");
  while (scanf("%lf", &hours) && hours != 0) {
    income_brutto = hours * INCOME_PER_HOUR;
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
