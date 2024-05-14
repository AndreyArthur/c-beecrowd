#include <stdio.h>

int main() {
    int number, worked_hours;
    float amount_per_hour;
    scanf("%d\n%d\n%f", &number, &worked_hours, &amount_per_hour);

    printf(
        "NUMBER = %d\nSALARY = U$ %.2f\n",
        number,
        amount_per_hour * (float)worked_hours);
    return 0;
}
