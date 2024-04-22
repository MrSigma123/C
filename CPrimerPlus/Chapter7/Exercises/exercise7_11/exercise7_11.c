/* The ABC Vegetable Shipping company sells watermelons, each
  costs 1.25$ per kg, beetroots, each 0.65$ per kg and onions,
  each 0.89$ per kg. The orders beyond 100$ receive a 5% discount
  which is counted before adding shipping cost. The shipping cost
  below 5kg is 3.50$, shipping over 5kg and less than 20kg is 10$
  and shipping over 20kg is 8.00$ and 0.10$ per any additional kg.
  Write a program which will use the interface with loop and switch
  statements. Make pressing letter A to enter the number of watermelons,
  B to enter the number of beetroots and C for the number of onions.
  After pressing Q the program should finish taking the order. Then
  the program should remember summed positions of orders. If the user
  firstly will order 4kg of watermelons and then 5kg of watermelons the
  program should count the order of total 9 kg of watermelons. The program
  should as well count all fees, discounts and shipping price with the sum of
  the whole order: price per kg, amount of ordered vegetables, value of every
  product, value of the whole order and eventual discount, shipping price
  and the overall cost of the whole order. */
#include <stdio.h>
int main(void) {
  const double WATERMELON_PRICE = 1.25;           // per 1kg
  const double BEETROOT_PRICE = 0.65;
  const double ONIONS_PRICE = 0.89;
  const double DISCOUNT_TRESHOLD = 100.0;
  const double DISCOUNT_VALUE = 0.05;
  const double SHIPPING_UP_TO_5KG = 3.5;
  const double SHIPPING_UP_TO_20KG = 10.0;
  const double SHIPPING_OVER_20KG = 8.0;
  const double SHIPPING_EVERY_KG_OVER_20KG = 0.1;
  char selection = 'x';
  double watermelon_quantity_kg = 0.0;
  double beetroots_quantity_kg = 0.0;
  double onions_quantity_kg = 0.0;
  double products_price = 0.0;
  double products_weight = 0.0;
  double watermelons_cost = 0.0;
  double beetroots_cost = 0.0;
  double onions_cost = 0.0;
  double discount = 0.0;
  double total_price, quantity_in_kg, shipping;
  printf("This program helps you to order some vegetables.\n");
  printf("You can buy watermelons, beetroots and onions.\n");
  printf("\nTo add product to basket press each of the following letters:\n");
  printf("  A: watermelon\n");
  printf("  B: beetroot\n");
  printf("  C: onion\n");
  printf("Select your product (or press Q to quit): ");
  while (scanf(" %c", &selection) && selection != 'Q') {
    quantity_in_kg = 0.0;
    if (selection == 'A' || selection == 'a' ||
        selection == 'B' || selection == 'b' ||
        selection == 'C' || selection == 'c') {
      printf("How many kg you want? Enter a number: ");
      while (scanf("%lf", &quantity_in_kg ) && quantity_in_kg <= 0) {
        printf("Something went wrong... Enter positive number: ");
      }
      products_weight += quantity_in_kg;
    }
    switch (selection) {
      case 'a' :
      case 'A' :
        watermelon_quantity_kg += quantity_in_kg;
        watermelons_cost += WATERMELON_PRICE * quantity_in_kg;
        products_price += watermelons_cost;
        printf("You've added %.3lfkg of watermelons into your basket successfully!\n", quantity_in_kg);
        break;
      case 'b' :
      case 'B' :
        beetroots_quantity_kg += quantity_in_kg;
        beetroots_cost += BEETROOT_PRICE * quantity_in_kg;
        products_price += beetroots_cost;
        printf("You've added %.3lfkg of beetroots into your basket successfully!\n", quantity_in_kg);
        break;
      case 'c' :
      case 'C' :
        onions_quantity_kg += quantity_in_kg;
        onions_cost = ONIONS_PRICE * quantity_in_kg;
        products_price += onions_cost;
        printf("You've added %.3lfkg of onions into your basket successfully!\n", quantity_in_kg);
        break;
      default :
        printf("Unrecognized command, try again...\n");
        continue;
    }
    printf("\nEnter next product to be added to the basket.\n");
    printf("\nTo add product to basket press each of the following letters:\n");
    printf("  A: watermelon\n");
    printf("  B: beetroot\n");
    printf("  C: onion\n");
    printf("Select your product (or press Q to quit): ");
  }
  if (products_price >= DISCOUNT_TRESHOLD) {
    printf("\nYou've received a 5%% discount!\n");
    printf("Products price before discount: $%.2lf\n", products_price);
    discount = products_price * DISCOUNT_VALUE;
    products_price -= discount;
    printf("Products price after discount: $%.2lf\n", products_price);
  }
  if (products_weight <= 5.0) {
    shipping = SHIPPING_UP_TO_5KG;
  } else if (products_weight > 5.0 && products_weight <= 20.0){
    shipping = SHIPPING_UP_TO_20KG;
  } else {
    shipping = SHIPPING_OVER_20KG + (products_weight - 20.0) * SHIPPING_EVERY_KG_OVER_20KG;
  }
  total_price = products_price + shipping;
  printf("\n         Here is your order:\n");
  printf("Products price: $%4.2lf, their weight: %.2lfkg\n", products_price, products_weight);
  printf("Watermelons:  %4.3lfkg, their cost is $%.2lf\n", watermelon_quantity_kg, watermelons_cost);
  printf("  Beetroots:  %4.3lfkg, their cost is $%.2lf\n", beetroots_quantity_kg, beetroots_cost);
  printf("     Onions:  %4.3lfkg, their cost is $%.2lf\n", onions_quantity_kg, onions_cost);
  if (discount) {
    printf("   Discount: -$%4.2lf\n", discount);
  }
  printf("   Shipping:  $%4.2lf\n", shipping);
  printf("      TOTAL:  $%4.3lf\n", total_price);
  return 0;
}
