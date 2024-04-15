/* Write a program which asks the user for entering height in centimeters
  and then displays that value in centimeters, feets and inches,
  (allow for fraction representation of centimeters and inches)
  User should be able to enter the height in loop unless the user won't
  enter non-positive value. Below is an example of the output:
    Enter height in centimeters: 182
    182.0 cm = 5 feet, 71.65 inches
    Enter height in centimeters: (<=0 - end): 168.7
    168.7 cm = 5 feet, 66.42 inches
    Enter height in centimeters (<=0 - end): 0
    Goodbye! */
#include <stdio.h>
int main(void){
  double height_cm; // height in centimeters
  double height_feet, height_inch;
  const double cm_inch = 0.3937;
  const double cm_feet = 0.0328;
  printf("Enter height in centimeters: (<=0 - end): ");
  scanf("%lf", &height_cm);
  while (height_cm > 0){
    height_feet = height_cm * cm_feet;
    height_inch = height_cm * cm_inch;
    printf("%.1lf cm = %d feet, %.2lf inches\n", height_cm,
           (int) height_feet, height_inch); // cutting the floating point part
    printf("\nEnter height in centimeters: (<=0 - end): ");
    scanf("%lf", &height_cm);
  }
  return 0;
}
