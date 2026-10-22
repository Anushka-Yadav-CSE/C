// A program to find the area and perimeter of a square by taking diagonal as input.
#include <stdio.h>
#include <math.h>
int main() {
    double diagonal;

    // Taking input from the user.
    printf("Enter the diagonal of the square: ");
    if (scanf("%lf", &diagonal) != 1) {
        printf("Invalid input! Diagonal must be a real number.");
        return 1;
    }

    if (diagonal > 0) {
        // Calculations.
        double side = diagonal / sqrt(2);
        double area = side * side;
        double perimeter = 4 * side;

        // Printing the result.
        printf("Side of the square = %.2f\n", side);
        printf("Area of the square = %.2f\n", area);
        printf("Perimeter of the square = %.2f\n", perimeter);
    }
    else {
        printf("Invalid Input! Diagonal must be a positive real value.\n");
    }

    return 0;
}