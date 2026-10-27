// A program to take principal, rate and time as input and calculate the difference between their SI and CI.
#include <stdio.h>
#include <math.h>
int main() {
    double p, r;
    int t;

    // Taking input from the user.
    printf("Enter the principal(p): ");
    if (scanf("%lf", &p) != 1) {
        printf("Invalid Input! Principal must be a positive real number.\n");
        return 1;
    }

    printf("Enter the rate of interest(r): ");
    if (scanf("%lf", &r) != 1) {
        printf("Invalid Input! Rate of interest must be a positive real number.\n");
        return 1;
    }

    printf("Enter the time(t): ");
    if (scanf("%d", &t) != 1) {
        printf("Invalid Input! Time must be a positive number.\n");
        return 1;
    }

    // Condition to check whether entered values are positive.
    if (p > 0 && r > 0 && t > 0) {

        // Calculations.
        double SI = (p * r * t) / 100.0;
        double amount = p * pow((1.0 + (r / 100.0)), t);
        double CI = amount - p;

        // Printing the result.
        printf("Simple Interest = %.2f\n", SI);
        printf("Compound Interest = %.2f\n", CI);

        // Condition to check whether SI is greater, less than, or equal to CI.
        if (CI > SI) {
            double diff = CI - SI;
            printf("Difference between them = %.2f\n", diff);
        }
        else if (SI > CI) {
            double diff = SI - CI;
            printf("Difference between them = %.2f\n", diff);
        }
        else {
            printf("Difference between them = 0.\n");
        }
    }
    else {
        printf("Invalid Input! Principal, time and rate of interest must be greater than 0.\n");
    }

    return 0;
}