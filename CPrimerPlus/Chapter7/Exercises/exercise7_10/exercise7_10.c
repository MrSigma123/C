/* American tax scale from 1988 was one of the simplest
  ones in recent years. It was consisted of four categories
  from which every one involved two rates. Here is it's summary:

  Category                          Tax
  Free status                       15% of income to 17850$ plus 28% remainder
  Family head                       15% of income to 23900$ plus 28% remainder
  Marriage, joint settlement        15% of income to 29750$ plus 28% remainder
  Marriage, separate settlement     15% of income to 14875$ plus 28% remainder

  In example free status person who reached 20 000$ income is owed to the state
  0.15 * 17 850$ + 0.28 * (20 000$ - 17 850$). Write a program which calculates
  the category and taxable income and then calculates tax height. Use the loop
  in a way to ccalculate the tax value for several different cases in one program
  flow seesion. */
#include <stdio.h>
#define FREE_STATUS_TRESHOLD 17850
#define FAMILY_HEAD_TRESHOLD 23900
#define MARRIAGE_JOINT_TRESHOLD 29750
#define MARRIAGE_SEPARATE_TRESHOLD 14875
#define BASE_RATE 0.15
#define REMAINDER_RATE 0.28
#define STARS "*********************************************************************"
int main(void) {
  double income_brutto, tax, income_netto;
  int status_indicator;
  char continue_flag = 'x'; // default value different than 'y' or 'n'
  printf("This program calculates your tax. Select your marital status:\n");
  printf("\n%s\n", STARS);
  printf("1) Free status                       2) Family head\n");
  printf("3) Marriage (joint settlement)       4) Marriage (separate settlement)\n");
  printf("5) Quit\n");
  printf("%s\n", STARS);
  printf("\nYour choice: ");
  while(scanf("%d", &status_indicator) && status_indicator != 5) {
    if (status_indicator < 1 || status_indicator > 5) {
      printf("\nUnrecodnized command, try again...\n");
      printf("Select your maritial status or type 5 to quit: ");
      continue;
    }
    printf("\nInput your income: $........\b\b\b\b\b\b\b\b");
    while (scanf("%lf", &income_brutto) <= 0) {
      printf("\nIncorrect income input format, try again...\n");
      printf("Input your income: ");
    };
    switch (status_indicator) {
      case 1 :
        if (income_brutto <= FREE_STATUS_TRESHOLD) {
          tax = income_brutto * BASE_RATE;
        } else {
          tax = FREE_STATUS_TRESHOLD * BASE_RATE + (income_brutto - FREE_STATUS_TRESHOLD) *
            REMAINDER_RATE;
        }
        break;
      case 2 : 
        if (income_brutto <= FAMILY_HEAD_TRESHOLD) {
          tax = income_brutto * BASE_RATE;
        } else {
          tax = FAMILY_HEAD_TRESHOLD * BASE_RATE + (income_brutto - FAMILY_HEAD_TRESHOLD) *
            REMAINDER_RATE;
        }
        break;
      case 3 :
        if (income_brutto <= MARRIAGE_JOINT_TRESHOLD) {
          tax = income_brutto * BASE_RATE;
        } else {
          tax = MARRIAGE_JOINT_TRESHOLD * BASE_RATE + (income_brutto - MARRIAGE_JOINT_TRESHOLD) *
            REMAINDER_RATE;
        }
        break;
      case 4 :
        if (income_brutto <= MARRIAGE_SEPARATE_TRESHOLD) {
          tax = income_brutto * BASE_RATE;
        } else {
          tax = MARRIAGE_SEPARATE_TRESHOLD * BASE_RATE + (income_brutto - MARRIAGE_SEPARATE_TRESHOLD) *
            REMAINDER_RATE;
        }
        break;
      case 5 :
        printf("\n\nYou've entered 5, program ends here...\n");
        printf("Goodbye!\n");
        break;
      default:
        printf("\n\nUnrecognized command, please try again...\n");
        continue;
    }
    income_netto = income_brutto - tax;
    printf("\nYour brutto income = $%.2lf, tax = $%.2lf and netto income = $%.2lf\n",
           income_brutto, tax, income_netto);
    printf("\nWould you like to calculate tax for different marital status or different income?\n");
    printf("Type y or n: ");
    scanf(" %c", &continue_flag);
    if (continue_flag == 'n') {
      break;
    }
    printf("\nThis program calculates your tax. Select your marital status:\n");
    printf("\n%s\n", STARS);
    printf("1) Free status                       2) Family head\n");
    printf("3) Marriage (joint settlement)       4) Marriage (separate settlement)\n");
    printf("5) Quit\n");
    printf("%s\n", STARS);
    printf("\nYour choice: ");
  }
  printf("\nProgram ends here...\n");
  printf("Goodbye!\n");
  return 0;
}
