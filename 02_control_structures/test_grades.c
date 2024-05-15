#include <stdio.h>

int is_in_range(int number, int start, int end) {
    return number >= start && number <= end;
}

int main() {
    int score_number;
    char score_character;

    scanf("%d", &score_number);

    if (score_number == 0) {
        score_character = 'E';
    } else if (is_in_range(score_number, 1, 35)) {
        score_character = 'D';
    } else if (is_in_range(score_number, 36, 60)) {
        score_character = 'C';
    } else if (is_in_range(score_number, 61, 85)) {
        score_character = 'B';
    } else if (is_in_range(score_number, 86, 100)) {
        score_character = 'A';
    }

    printf("%c\n", score_character);

    return 0;
}
