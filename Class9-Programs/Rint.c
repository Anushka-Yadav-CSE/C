// A program to demonstrate the use of the rint function.
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

    // Calculation.
    double b = rint(a);

    // Printing the result.
    printf("The value after using rint function = %.2f\n", b);

    return 0;
}