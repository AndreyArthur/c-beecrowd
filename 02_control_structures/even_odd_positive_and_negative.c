#include <stdio.h>

int main() {
    int odd, even, positive, negative, value;
    odd = 0;
    even = 0;
    positive = 0;
    negative = 0;

    for (int index = 0; index < 5; index++) {
        scanf("%d", &value);

        if (value % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        if (value > 0) {
            positive++;
        } else if (value < 0) {
            negative++;
        }
    }

    printf(
        "%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) "
        "positivo(s)\n%d valor(es) negativo(s)\n",
        even,
        odd,
        positive,
        negative);

    return 0;
}
