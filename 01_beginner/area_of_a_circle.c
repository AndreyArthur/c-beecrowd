#include <stdio.h>

int main() {
    double pi = 3.14159;
    double radius;
    scanf("%lf", &radius);

    printf("A=%.4lf\n", (radius * radius) * pi);
    return 0;
}
