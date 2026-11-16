// A program to display the nature of roots of a quadratic equation.
#include <stdio.h>
int main() {
    double a, b, c;

    // Taking input from the user.
    printf("Enter the value of a: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    printf("Enter the value of b: ");
    if (scanf("%lf", &b) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    printf("Enter the value of c: ");
    if (scanf("%lf", &c) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Calculate the discriminant.
    double d = (b * b) - (4 * a * c);

    // Condition to determine the nature of roots.
    if (d > 0) {
        printf("Roots are real and unequal.\n");
    }
    else if (d == 0) {
        printf("Roots are real and equal.\n");
    }
    else {
        printf("Roots are complex and unequal.\n");
    }

    return 0;
}