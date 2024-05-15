#include <stdio.h>
#include <stdlib.h>

int greater_between(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    int a, b, c, greatest;
    scanf("%d %d %d", &a, &b, &c);
    greatest = greater_between(a, b);
    greatest = greater_between(greatest, c);
    printf("%d eh o maior\n", greatest);
    return 0;
}
