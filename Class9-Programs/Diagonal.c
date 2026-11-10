// A program to display the diagonal of a square.
#include <stdio.h>
#include <math.h>
int main() {
    double side;

    // Taking input from the user.
    printf("Enter the side of the square: ");
    if (scanf("%lf", &side) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Calculation.
    double diagonal = sqrt(2) * side;

    // Printing the result.
    printf("Side of the square = %.2f\n", side);
    printf("Diagonal of the square = %.2f\n", diagonal);

    return 0;
}