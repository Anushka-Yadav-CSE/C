// This program demonstrates the use of the floor function.
#include <stdio.h>
#include <math.h>
int main() {
    double a;

    // Taking input from the user.
    printf("Enter the number: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Calculations.
    double b = floor(a);

    // Printing the result.
    printf("Floor value of the number = %.2f\n", b);

    return 0;
}