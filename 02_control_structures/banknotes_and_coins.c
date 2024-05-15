#include <stdio.h>

int in_cents(double num) {
    return (int)(num * 100);
}

int main() {
    int one_hundred, fifty, twenty, ten, five, two, one, fifty_cents,
        twenty_five_cents, ten_cents, five_cents, one_cent;
    double amount;
    int amount_in_cents;
    scanf("%lf", &amount);
    amount_in_cents = in_cents(amount);

    one_hundred =
        (amount_in_cents - amount_in_cents % in_cents(100)) / in_cents(100);
    amount_in_cents = amount_in_cents - one_hundred * in_cents(100);

    fifty = (amount_in_cents - amount_in_cents % in_cents(50)) / in_cents(50);
    amount_in_cents = amount_in_cents - fifty * in_cents(50);

    twenty = (amount_in_cents - amount_in_cents % in_cents(20)) / in_cents(20);
    amount_in_cents = amount_in_cents - twenty * in_cents(20);

    ten = (amount_in_cents - amount_in_cents % in_cents(10)) / in_cents(10);
    amount_in_cents = amount_in_cents - ten * in_cents(10);

    five = (amount_in_cents - amount_in_cents % in_cents(5)) / in_cents(5);
    amount_in_cents = amount_in_cents - five * in_cents(5);

    two = (amount_in_cents - amount_in_cents % in_cents(2)) / in_cents(2);
    amount_in_cents = amount_in_cents - two * in_cents(2);

    one = (amount_in_cents - amount_in_cents % in_cents(1)) / in_cents(1);
    amount_in_cents = amount_in_cents - one * in_cents(1);

    fifty_cents = (amount_in_cents - amount_in_cents % 50) / 50;
    amount_in_cents = amount_in_cents - fifty_cents * 50;

    twenty_five_cents = (amount_in_cents - amount_in_cents % 25) / 25;
    amount_in_cents = amount_in_cents - twenty_five_cents * 25;

    ten_cents = (amount_in_cents - amount_in_cents % 10) / 10;
    amount_in_cents = amount_in_cents - ten_cents * 10;

    five_cents = (amount_in_cents - amount_in_cents % 5) / 5;
    amount_in_cents = amount_in_cents - five_cents * 5;

    one_cent = amount_in_cents;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", one_hundred);
    printf("%d nota(s) de R$ 50.00\n", fifty);
    printf("%d nota(s) de R$ 20.00\n", twenty);
    printf("%d nota(s) de R$ 10.00\n", ten);
    printf("%d nota(s) de R$ 5.00\n", five);
    printf("%d nota(s) de R$ 2.00\n", two);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", one);
    printf("%d moeda(s) de R$ 0.50\n", fifty_cents);
    printf("%d moeda(s) de R$ 0.25\n", twenty_five_cents);
    printf("%d moeda(s) de R$ 0.10\n", ten_cents);
    printf("%d moeda(s) de R$ 0.05\n", five_cents);
    printf("%d moeda(s) de R$ 0.01\n", one_cent);

    return 0;
}
