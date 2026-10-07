// A program to calculate the monthly income of a person by taking the days he works as input.
#include <stdio.h>
int main() {
    int day;
    double income;
    // Taking input from the user.
    printf("Enter the number of days the worker works: ");
    if (scanf("%d", &day) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    if (day > 0 && day <= 30) {
        // Calculation
        income = (day * 350.0) - ((30 - day) * 30.0);
        // Printing the result.
        printf("Monthly Income = %.3f", income);
    }
    else {
        printf("Invalid Input! Number of days must be greater than 0 and less than or equal to 30.\n");
    }
    return 0;
}