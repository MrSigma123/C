/* this program converts your heigh in cm to inches and vice versa */
#include <stdio.h>
int main(void)
{
  float height_in_cm;
  float height_in_inch;
  float cm_to_ichch_converter = 0.393701;
  float inch_to_cm_converter = 2.54;
  printf("Enter your height in cm: ");
  scanf("%f", &height_in_cm);
  height_in_inch = height_in_cm * cm_to_ichch_converter;
  printf("Your height in inches is %f\n", height_in_inch);
  printf("Enter your height in inches: ");
  scanf("%f", &height_in_inch);
  height_in_cm = height_in_inch * inch_to_cm_converter;
  printf("Your height in cm is %.2f\n", height_in_cm);
  return 0;
}
