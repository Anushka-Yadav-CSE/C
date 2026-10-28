// A program to find the smallest of two numbers.
#include <stdio.h>
#define min(a, b) ((a) > (b) ? (b) : (a))
int main() {
    double a, b;

    // Taking input from the user.
    printf("Enter the first number: ");
    if (scanf ("%lf", &a) != 1) {
        printf("Invalid Input! Number must be a real value.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf ("%lf", &b) != 1) {
        printf("Invalid Input! Number must be a real value.\n");
        return 1;
    }

    // Calculations.
    double c = min(a, b);

    // Printing the result.
    printf("The smallest number among %.2f and %.2f = %.2f\n", a, b, c);

    return 0;
}