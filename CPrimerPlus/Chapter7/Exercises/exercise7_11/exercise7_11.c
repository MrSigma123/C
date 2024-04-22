/* The ABC Vegetable Shipping company sells watermelons, each
  costs 1.25$ per kg, beetroots, each 0.65$ per kg and onions,
  each 0.89$ per kg. The orders beyond 100$ receive a 5% discount
  which is counted before adding shipping cost. The shipping cost
  below 5kg is 3.50$, shipping over 5kg and less than 20kg is 10$
  and shipping over 20kg is 8.00$ and 0.10$ per any additional kg.
  Write a program which will use the interface with loop and switch
  statements. Make pressing letter A to enter the number of watermelons,
  B to enter the number of beetroots and C for the number of Onions.
  After pressing Q the program should finish taking the order. Then
  the program should remember summed positions of orders. If the user
  firstly will order 4kg of watermelons and then 5kg of watermelons the
  program should count the order of total 9 watermelons. The program should
  as well count all fees, discounts and shipping price with the sum of
  the whole order: price per kg, number of ordered vegetables, value of every
  single product, value of the whole order and eventual discount, shipping
  price and the overall cost of the whole order. */
#include <stdio.h>
int main(void) {
  const double watermelon_price = 1.25;
  const double beetroot_price = 0.65;
  const double onion_price = 0.89;
  const double discount_treshold = 100.0;
  const double discount_value = 0.05;
  const double shipping_up_5kg = 3.5;
  const double shipping_up_20kg = 10.0;
  const double shipping_over_20kg = 8.0;
  const double shipping_every_kg_over_20kg = 0.1;
  char selection = 'x';
  int watermelon_count = 0;
  int beetroot_count = 0;
  int onion_count = 0;
  double products_price = 0.0;
  double discount, total_price;
  printf("This program enables taking orders of your vegetables.\n");
  printf("You can buy watermelons, beetroots and onions.\n");
  printf("To add product to basket press each of the following letters:\n");
  printf("  A: watermelon\n");
  printf("  B: beetroot\n");
  printf("  C: onion\n");
  printf("Select your product (or press Q to quit): ");
  while (scanf("%c", &selection) != 'Q') {
    switch (selection) {
      case 'a' :
      case 'A' :
        watermelon_count++;
      case 'b' :
      case 'B' :

      case 'c' :
      case 'C' :

      default :
    }

  }
}
