// A program to display the simple interest and amount.
#include <stdio.h>
int main() {
    double p, i, t;
    // Taking input from the user.
    printf("Enter the principal: ");
    if (scanf("%lf", &p) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    printf("Enter the rate of interest: ");
    if (scanf("%lf", &i) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    printf("Enter the time: ");
    if (scanf("%lf", &t) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    // Calculating simple interest and amount.
    double si = (p * i * t) / 100.0;
    double amt = p + si;
    // Display the simple interest and amount.
    printf("Simple Interest = %.3f\n", si);
    printf("Amount = %.3f", amt);

    return 0;
}