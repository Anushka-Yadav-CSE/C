/* A program to calculate the percentage update when:
(i) a number is updated from a to b */
#include <stdio.h>
int main() {
    double a, b, c;
    // Taking input from the user.
    printf("Enter the first number: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    printf("Enter the second number: ");
    if (scanf("%lf", &b) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    if (a != 0) {
        // Calculations.
        c = ((b - a) / a) * 100.0;
        // Printing the result.
        printf("Percentage update = %.3f\n", c);
    }
    else {
        printf("Invalid Input! a must not be 0.\n");
    }
    return 0;
}