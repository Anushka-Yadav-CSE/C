// A program to accept the number of days and display it after converting it into number of years, months and days.
#include <stdio.h>
int main() {
    int days;

    // Taking input from the user.
    printf("Enter the number of days: ");
    if (scanf("%d", &days) != 1) {
        printf("Invalid Input! Number must be an integer.\n");
        return 1;
    }

    // Calculations.
    int years = days / 365;
    int a = days % 365;
    int months = a / 30;
    days = a % 30;

    // Printing the result.
    printf("The number of years = %d\n", years);
    printf("The number of months = %d\n", months);
    printf("The number of days = %d\n", days);

    return 0;
}