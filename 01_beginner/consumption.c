#include <stdio.h>

int main() {
    int distance_traveled_in_km;
    float spent_fuel_in_liters;
    scanf("%d", &distance_traveled_in_km);
    scanf("%f", &spent_fuel_in_liters);

    printf(
        "%.3f km/l\n", (float)distance_traveled_in_km / spent_fuel_in_liters);
    return 0;
}
