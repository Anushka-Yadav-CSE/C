// A program to display the log of a number.
#include <stdio.h>
#include <math.h>
int main() {
    double a;

    // Taking input from the user.
    printf("Enter the number: ");
    if (scanf("%lf", &a) != 1 || a <= 0) {
        printf("Invalid Input! Number must be a positive real number.\n");
        return 1;
    }

    // Calculating the log of the number.
    double b = log(a);

    // Displaying the log of the number.
    printf("Logarithm of the number = %.3f\n", b);

    return 0;
}