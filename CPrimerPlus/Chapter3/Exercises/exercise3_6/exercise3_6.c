/* this program calculates the values according to the given formula */
#include <stdio.h>
int main(void)
{
  double water_atom_mass = 3.0e-23;
  double liter_to_gram_conv = 1000.0;
  float liters_of_water;
  float amount_of_atoms_in_water;
  printf("Enter the amount of water in liters: ");
  scanf("%f", &liters_of_water);
  amount_of_atoms_in_water = liters_of_water * liter_to_gram_conv / water_atom_mass;
  printf("The amount of atoms in %.2f liters of water is approximately %.0f\n", 
         liters_of_water, amount_of_atoms_in_water);
  return 0;
}
