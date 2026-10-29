// A program to display the square root of a number.
#include <stdio.h>
#include <math.h>
int main() {
    double a;

    // Taking input from the user.
    printf("Enter the number: ");
    if (scanf("%lf", &a) != 1 && a < 0) {
        printf("Invalid Input! Number must be a real number and must be greater than or equal to 0.\n");
        return 1;
    }

    // Calculating the square root of the number.
    double s = sqrt(a);

    // Displaying the square root of the number.
    printf("Square root of %.2f = %.2f\n", a, s);

    return 0;
}