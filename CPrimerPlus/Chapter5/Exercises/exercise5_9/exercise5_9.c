/* Write a program which takes the temperature in Fahrenheit degrees.
  The program should take the double type value and pass it (as an argument)
  to your own function named Temperature(). That function should calculate
  proper value in Celsius and Kelvin scales and then display all three values
  keeping the precision to second digit after the floating point. Function
  should display all values from the scale. That's the formula which change
  Fahrenheit degrees to Celsius degrees:
    Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0)
  Kelvin scale, used commonly in science is a scale in which 0 represents
  absolute zero, which is the bottom limit of the temperature. That's the
  formula which converts Celsius degrees to Kelvin degrees:
    Kelvin = Celsius + 273.16
  Temperature() function should use the keyword const for the symbols
  representing constants in abovementioned formulas. Whereas main()
  should use a loop to enable for the user multiple usage of converting
  function. The loop ends it's cycle when the user will enter a value which
  is not a number (i.e. letter). Use the fact, that scanf() function returs
  a value of inputted elements, so it'll return 1 after reading a value, but
  won't return 1 if the user will enter 'k' for examlpe. To compare values
  returned by scanf() function with 1 use operator ==. */
#include <stdio.h>
void Temperature(double temp);
int main(void){
  double fahrenheit;
  printf("This program convert the value in Celsius to Fahrenheit degrees.\n");
  printf("Enter the value of Fahrenheit degrees (any non number to exit): ");
  while (scanf("%lf", &fahrenheit) == 1){
    Temperature(fahrenheit);
    printf("\nEnter the value of Fahrenheit degrees (any non number to exit): ");
  }
  return 0;
}
void Temperature(double temp){
  const double fahr_celcius_conv = 5.0/9.0 * (temp - 32.0);
  const double fahr_kelvin_conv = fahr_celcius_conv + 273.16;
  printf("%.2lf Fahr is equal to %.2lf Celsius and %.2lf Kelvin\n",
         temp, fahr_celcius_conv, fahr_kelvin_conv);
  return;
}
