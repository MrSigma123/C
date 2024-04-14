// Write a program, which asks the user about the number of miles and the number
// of used petrol galons. Following, the program should calculate and display
// the level of the petrol in the form of miles/galon, with one digit precision
// after the floating point. Next, using the fact that one galon is equal to
// 3.785 liters and one mile is aproximately 1.609 kilometers - convert the
// indicator mile/galon to liters/100km (european standard)
// The result has to be displayed with done digit after the floating point precision
// Pay attention, that in USA the indicator tells the value of petrol, which is needed
// in europe contrary. Use constants (const or #define) for both convertion
#include <stdio.h>
#include <stdlib.h>
int main(void){
  const float galon_liter_equivalent = 3.785;
  const float mile_kilometer_equivalent = 1.609;
  float miles_passed;
  int galons;
  float petrol_level; 
  printf("Enter the number of miles, which you've already passed: ");
  scanf("%f", &miles_passed);
  printf("Enter the number of used galons: ");
  scanf("%d", &galons);
  petrol_level = miles_passed/galons;
  printf("The level of the petrol: %.1f (US standard)\n", petrol_level);
  // indicator covertion
  petrol_level = (galons * galon_liter_equivalent)/(miles_passed * mile_kilometer_equivalent);
  printf("The level of the petrol: %.1f (EU standard)\n", petrol_level);
  return 0;
}
