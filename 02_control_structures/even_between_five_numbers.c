#include <stdio.h>

int main() {
    int number;
    int even_count = 0;

    for (int index = 0; index < 5; index++) {
        scanf("%d", &number);
        if (number % 2 == 0) {
            even_count++;
        }
    }

    printf("%d valores pares\n", even_count);
}
