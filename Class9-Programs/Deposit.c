// A program to calculate Term Deposit and Recurring Deposit as per the user's choice.
#include <stdio.h>
#include <math.h>
int main() {

    printf("1: For Term Deposit.\n");
    printf("2: For Recurring Deposit.\n");

    // Get input from the user.
    int choice;
    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Perform the operation based on user's choice.
    switch (choice) {
        case 1: {
            double p, r, t;

            printf("Enter the principal amount: ");
            if (scanf("%lf", &p) != 1 || p <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }

            printf("Enter the rate of interest: ");
            if (scanf("%lf", &r) != 1 || r <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }

            printf("Enter the time period in years: ");
            if (scanf("%lf", &t) != 1 || t <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }

            double amount = p * pow((1.0 + r / 100.0), t);

            printf("Principal Amount = %.2f\n", p);
            printf("Rate of interest = %.2f\n", r);
            printf("Time Period in years = %.2f\n", t);
            printf("Maturity Amount = %.2f\n", amount);

            break;
        }
        case 2: {
            double p, r, t;

            printf("Enter the Monthly Instalment: ");
            if (scanf("%lf", &p) != 1 || p <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }

            printf("Enter the rate of interest: ");
            if (scanf("%lf", &r) != 1 || r <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }

            printf("Enter the time period in months: ");
            if (scanf("%lf", &t) != 1 || t <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }

            double amount = (p * t) + p * ((t*(t+1)) / 2) * (r / 100.0) * (1.0 / 12.0);

            printf("Monthly Instalment = %.2f\n", p);
            printf("Rate of interest = %.2f\n", r);
            printf("Time Period in months = %.2f\n", t);
            printf("Maturity Amount = %.2f\n", amount);

            break;
        }
        default: {
            printf("Wrong Choice! Please choose either 1 or 2.\n");

            break;
        }
    }
    return 0;
}