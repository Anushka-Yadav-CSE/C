// A program to calculate compound interest.
#include <stdio.h>
int main() {
    double principal;
    int time = 3;
    double rate = 5.0;

    // Taking input from the user.
    printf("Enter the principal: ");
    if (scanf("%lf", &principal) != 1) {
        printf("Invalid Input! Principal must be a positive real number.\n");
        return 1;
    }

    // Condition to check whether principal is reater than 0 or not.
    if (principal > 0) {

        // for loop to calculate interest of each year.
        for (int i = 1; i <= time; i++) {

            // Calculations.
            double amount = principal * (1 + (rate / 100.0));
            double interest = amount - principal;

            // Printing the result.
            printf("Interest for the %d year = %.2f\n", i, interest);
            principal = amount;
        }
    }
    else {
        // Printing the result.
        printf("Invalid Input! Principal must be a positive real number.\n");
    }

    return 0;
}