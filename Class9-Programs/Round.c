// A program to print the rounded value of a number.
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
    double b = round(a);

    // Printing the result.
    printf("Rounded value of the number = %.2f\n", b);

    return 0;
}