// A program to display the rounded off number of a number.
#include <stdio.h>
#include <math.h>
int main() {
    double a;

    // Taking input from the user.
    printf("Enter the number: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid Input.\n");
        return 1;
    }

    // Calculating the round-off value of the number.
    double b = round(a);

    // Displaying the result.
    printf("The rounded-off value of %.3f = %.3f\n", a, b);

    return 0;
}