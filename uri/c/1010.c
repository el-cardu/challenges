#include <stdio.h>

int main() {

  int code_product_1, code_product_2;
  int amount_product_1, amount_product_2;
  float price_product_1, price_product_2, value_to_pay;

  scanf("%d %d %f\n", &code_product_1, &amount_product_1, &price_product_1);
  scanf("%d %d %f\n", &code_product_2, &amount_product_2, &price_product_2);

  value_to_pay = (amount_product_1 * price_product_1) + (amount_product_2 * price_product_2);

  printf("VALOR A PAGAR: R$ %.2f\n", value_to_pay);

  return 0;
}
