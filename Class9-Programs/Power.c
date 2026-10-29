// A program to display the power of a number.
#include <stdio.h>
#include <math.h>
int main() {
    double a;
    int n;

    // Taking input from the user.
    printf("Enter the number: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    printf("Enter the power: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Calculating the power of the number.
    double b = pow(a, n);

    // Displaying the calculated result.
    printf("The result of %.2f raised to the power %d = %.2f\n", a, n, b);

    return 0;
}