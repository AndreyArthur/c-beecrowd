#include <stdio.h>

int in_cents(float num) {
    return (int)(num * 100);
}

int percentage(int amount, int rate) {
    return (int)((float)amount * ((float)rate / 100));
}

int main() {
    float salary;
    int salary_in_cents, readjustment_rate, new_salary_in_cents,
        readjust_in_cents;
    scanf("%f", &salary);
    salary_in_cents = in_cents(salary);

    if (salary_in_cents >= 0 && salary_in_cents <= in_cents(400)) {
        readjustment_rate = 15;
    } else if (
        salary_in_cents > in_cents(400) && salary_in_cents <= in_cents(800)) {
        readjustment_rate = 12;
    } else if (
        salary_in_cents > in_cents(800) && salary_in_cents <= in_cents(1200)) {
        readjustment_rate = 10;
    } else if (
        salary_in_cents > in_cents(1200) && salary_in_cents <= in_cents(2000)) {
        readjustment_rate = 7;
    } else if (salary_in_cents > in_cents(2000)) {
        readjustment_rate = 4;
    }

    readjust_in_cents = percentage(salary_in_cents, readjustment_rate);
    new_salary_in_cents = salary_in_cents + readjust_in_cents;

    printf("Novo salario: %.2f\n", (float)new_salary_in_cents / 100);
    printf("Reajuste ganho: %.2f\n", (float)readjust_in_cents / 100);
    printf("Em percentual: %d %%\n", readjustment_rate);

    return 0;
}
