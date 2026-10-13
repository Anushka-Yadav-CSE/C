// A program to display the area of circle by taking radius as user input.
#include <stdio.h>
#define PI  3.14
int main() {
    double radius, area;

    // Prompting the user to enter the radius.
    printf("Enter the value of radius: ");
    scanf("%lf", &radius);

    // Calculations.
    area = PI * radius * radius;

    // Printing the result.
    printf("Radius of the circle = %.3lf\n", radius);
    printf("Area of the circle = %.3lf\n", area);

    return 0;
}