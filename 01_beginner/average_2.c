#include <stdio.h>

int main() {
    double grade = 0;
    double current;
    scanf("%lf", &current);
    grade += current * 2;
    scanf("%lf", &current);
    grade += current * 3;
    scanf("%lf", &current);
    grade += current * 5;

    grade = grade / 10;

    printf("MEDIA = %.1lf\n", grade);
    return 0;
}
