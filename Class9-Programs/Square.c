// A program to display the area, perimeter and diagonal of a square.
#include <stdio.h>
#include <math.h>
int main() {
    // Declaring variable to store user input.
    float side;
    // Taking input from the user.
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    // Calculations
    float area = side * side;
    float perimeter = 4 * side;
    float diagonal = sqrt(2) * side;
    // Print the result
    printf("Side of the square is %.2f\n", side);
    printf("Area of the square is %.2f\n", area);
    printf("Perimeter of the square is %.2f\n", perimeter);
    printf("Diagonal of the square is %.2f\n", diagonal);
    // Returning 0 to indicate successful execution.
    return 0;
}