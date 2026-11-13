// A program to display the radius of a circle.
#include <stdio.h>
#include <math.h>
int main() {
    double area, radius;

    // Taking input from the user.
    printf("Enter the area of the circle: ");
    if (scanf("%lf", &area) != 1 || area <= 0) {
        printf("Invalid Input! Area must be a positive real number.\n");
        return 1;
    }

    // Calculation.
    radius = sqrt((7 * area) / 22);

    // Printing the result.
    printf("Radius of the circle = %.2f\n", radius);

    return 0;
}