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
  const double watermelon_price = 1.25;           // per 1kg
  const double beetroot_price = 0.65;
  const double onions_price = 0.89;
  const double discount_treshold = 100.0;
  const double discount_value = 0.05;
  const double shipping_up_5kg = 3.5;
  const double shipping_up_20kg = 10.0;
  const double shipping_over_20kg = 8.0;
  const double shipping_every_kg_over_20kg = 0.1;
  char selection = 'x';
  double watermelon_quantity_kg = 0.0;
  double beetroots_quantity_kg = 0.0;
  double onions_quantity_kg = 0.0;
  double products_price = 0.0;
  double products_count = 0.0;
  double watermelons_cost = 0.0;
  double beetroots_cost = 0.0;
  double onions_cost = 0.0;
  double discount, total_price, quantity_in_kg;
  printf("This program enables taking orders of your vegetables.\n");
  printf("You can buy watermelons, beetroots and onions.\n");
  printf("To add product to basket press each of the following letters:\n");
  printf("  A: watermelon\n");
  printf("  B: beetroot\n");
  printf("  C: onion\n");
  printf("Select your product (or press Q to quit): ");
  while (scanf("%c", &selection) != 'Q') {
    quantity_in_kg = 0.0;
    if (selection == 'A' || selection == 'a' ||
        selection == 'B' || selection == 'b' ||
        selection == 'C' || selection == 'c') {
      printf("How many kg you want? Enter a number: ");
      while (scanf("%lf", &quantity_in_kg ) && quantity_in_kg <= 0) {
        printf("Something went wrong... Enter positive number: ");
      }
    }
    switch (selection) {
      case 'a' :
      case 'A' :
        watermelon_quantity_kg += quantity_in_kg;
        watermelons_cost += watermelon_price * quantity_in_kg;
        products_price += watermelons_cost;
        printf("You've added %lfkg of watermelons into your basket successfully!\n", quantity_in_kg);
      case 'b' :
      case 'B' :
        beetroots_quantity_kg += quantity_in_kg;
        beetroots_cost += beetroot_price * quantity_in_kg;
        products_price += beetroots_cost;
        printf("You've added %lfkg of beetroots into your basket successfully!\n", quantity_in_kg);
      case 'c' :
      case 'C' :
        onions_quantity_kg += quantity_in_kg;
        onions_cost = onions_price * quantity_in_kg;
        products_price += onions_cost;
        printf("You've added %lfkg of onions into your basket successfully!\n", quantity_in_kg);
      default :
        printf("Unrecognized command, try again...\n");
        continue;
    }
    products_count += quantity_in_kg;
  }
  printf("Here is your order:\n");
  printf("Products price: $%.2lf\n", products_price);
  printf("Watermelons: %.3lfkg, their cost is $%.2lf\n", watermelon_quantity_kg, watermelons_cost);
  printf("Beetroots: %.3lfkg, their cost is $%.2lf\n", beetroots_quantity_kg, beetroots_cost);
  printf("Onions: %.3lfkg, their cost is $%.2lf\n", onions_quantity_kg, onions_cost);


}
