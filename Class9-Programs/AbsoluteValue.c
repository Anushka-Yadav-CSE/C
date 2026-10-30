// A program to display the absolute value of a number.
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

    // Calculating the absolute value of the number.
    double b = fabs(a);

    // Displaying the absolute value of the number.
    printf("The absolute value of %.3f = %.3f\n", a, b);

    return 0;
}