#include <stdio.h>
#define YEAR_IN_DAYS 365
#define MONTH_IN_DAYS 30

int main() {
    int age_in_days, years, months, days;
    scanf("%d", &age_in_days);

    years = (age_in_days - age_in_days % YEAR_IN_DAYS) / YEAR_IN_DAYS;
    age_in_days -= years * YEAR_IN_DAYS;
    months = (age_in_days - age_in_days % MONTH_IN_DAYS) / MONTH_IN_DAYS;
    age_in_days -= months * MONTH_IN_DAYS;
    days = age_in_days;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
    return 0;
}
