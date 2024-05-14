#include <stdio.h>
#define HOURS_IN_SECONDS 3600
#define MINUTES_IN_SECONDS 60

int main() {
    int time_in_seconds, seconds, minutes, hours;
    scanf("%d", &time_in_seconds);

    hours = (time_in_seconds - time_in_seconds % HOURS_IN_SECONDS) /
            HOURS_IN_SECONDS;
    time_in_seconds -= hours * HOURS_IN_SECONDS;
    minutes = (time_in_seconds - time_in_seconds % MINUTES_IN_SECONDS) /
              MINUTES_IN_SECONDS;
    time_in_seconds -= minutes * MINUTES_IN_SECONDS;
    seconds = time_in_seconds;

    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}
