/* A program to take SP as input and calculate the total CP of two calculators when one has
 a loss of 20% while other has a profit of 20%. */
#include <stdio.h>
int main() {
    double sp;
    
    // Taking input from the user.
    printf("Enter the selling price: ");
    if (scanf("%lf", &sp) != 1 || sp <= 0.0) {
        printf("Invalid Input! Selling price must be a positive real number.\n");
        return 1;
    }

    // Calculations.
    double cp1 = sp / (1.0 + (20.0 / 100.0));
    double cp2 = sp / (1.0 - (20.0 / 100.0));
    double totalcp = cp1 + cp2;

    // Printing the result.
    printf("Total Cost Price of both the calculators = %.2f\n", totalcp);

    return 0;
}