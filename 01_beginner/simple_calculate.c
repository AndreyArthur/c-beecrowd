#include <stdio.h>

int main() {
    int product_code_placeholder;
    int first_product_amount, second_product_amount;
    float first_product_price, second_product_price;

    scanf(
        "%d %d %f\n%d %d %f",
        &product_code_placeholder,
        &first_product_amount,
        &first_product_price,
        &product_code_placeholder,
        &second_product_amount,
        &second_product_price);

    printf(
        "VALOR A PAGAR: R$ %.2f\n",
        (float)first_product_amount * first_product_price +
            (float)second_product_amount * second_product_price);
    return 0;
}
