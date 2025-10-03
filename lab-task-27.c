// WAP to convert number of days to years,months and days.

#include <stdio.h>
int main() {
    int days, years, months, remaining_days;

    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365;
    days = days % 365;
    months = days / 30;
    remaining_days = days % 30;
    printf("Years: %d, Months: %d, Days: %d\n", years, months, remaining_days   );

    return 0;
}