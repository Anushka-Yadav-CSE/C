// A program to display the cube root of a number.
#include <stdio.h>
#include <math.h>
int main() {
    double a;

    // Taking input from the user.
    printf("Enter the number: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid Input! Number must be a real number.\n");
        return 1;
    }

    // Calculating the cube root of the number.
    double b = cbrt(a);

    // Displaying the cube root of the number.
    printf("The cube root of %.2f = %.2f\n", a, b);

    return 0;
}