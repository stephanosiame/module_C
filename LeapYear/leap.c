#include <stdio.h>

int leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;  // Leap year
    }
    return 0;  // Not a leap year
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (leap_year(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
