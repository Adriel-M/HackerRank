#include <stdio.h>
#include <math.h>

int main() {
    double meal_cost;
    int tip_percent;
    int tax_percent;

    scanf("%lf", &meal_cost);
    scanf("%d", &tip_percent);
    scanf("%d", &tax_percent);

    double tip_total = meal_cost * (tip_percent / 100.0);
    double tax_total = meal_cost * (tax_percent / 100.0);

    int total_cost = round(meal_cost + tip_total + tax_total);

    printf("The total meal cost is %d dollars.\n", total_cost);

    return 0;
}
