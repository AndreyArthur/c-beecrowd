#include <stdio.h>
#define DAY_IN_SECONDS 86400
#define HOUR_IN_SECONDS 3600
#define MINUTE_IN_SECONDS 60

int main() {
    int start_days, start_hours, start_minutes, start_seconds, end_days,
        end_hours, end_minutes, end_seconds, start_date_in_seconds,
        end_date_in_seconds, total_seconds, days, hours, minutes, seconds;

    scanf(
        "Dia %d\n%d : %d : %d\nDia %d\n%d : %d : %d",
        &start_days,
        &start_hours,
        &start_minutes,
        &start_seconds,
        &end_days,
        &end_hours,
        &end_minutes,
        &end_seconds);

    start_date_in_seconds = (start_days * DAY_IN_SECONDS) +
                            (start_hours * HOUR_IN_SECONDS) +
                            (start_minutes * MINUTE_IN_SECONDS) + start_seconds;

    end_date_in_seconds = (end_days * DAY_IN_SECONDS) +
                          (end_hours * HOUR_IN_SECONDS) +
                          (end_minutes * MINUTE_IN_SECONDS) + end_seconds;

    total_seconds = end_date_in_seconds - start_date_in_seconds;

    days = (total_seconds - total_seconds % DAY_IN_SECONDS) / DAY_IN_SECONDS;
    total_seconds = total_seconds - days * DAY_IN_SECONDS;
    hours = (total_seconds - total_seconds % HOUR_IN_SECONDS) / HOUR_IN_SECONDS;
    total_seconds = total_seconds - hours * HOUR_IN_SECONDS;
    minutes =
        (total_seconds - total_seconds % MINUTE_IN_SECONDS) / MINUTE_IN_SECONDS;
    total_seconds = total_seconds - minutes * MINUTE_IN_SECONDS;
    seconds = total_seconds;

    printf(
        "%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",
        days,
        hours,
        minutes,
        seconds);
    return 0;
}
