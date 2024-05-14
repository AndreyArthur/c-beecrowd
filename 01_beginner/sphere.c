#include <stdio.h>

int main() {
    double radius, pi;
    pi = 3.14159;
    scanf("%lf", &radius);

    printf("VOLUME = %.3lf\n", (4 * (pi * (radius * radius * radius))) / 3);
    return 0;
}
