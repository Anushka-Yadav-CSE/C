// A program to display the hypotenuse of a right-angled triangle.
#include <stdio.h>
#include <math.h>
int main() {
    double base, perpendicular;

    // Taking input from the user.
    printf("Enter the base of the triangle: ");
    if (scanf("%lf", &base) != 1 || base <= 0) {
        printf("Invalid Input! base must be a real positive number.\n");
        return 1;
    }

    printf("Enter the perpendicular of the triangle: ");
    if (scanf("%lf", &perpendicular) != 1 || perpendicular <= 0) {
        printf("Invalid Input! perpendicular must be a real positive number.\n");
        return 1;
    }

    // Calculating the hypotenuse
    double hypotenuse = sqrt((perpendicular * perpendicular) + (base * base));

    // Displaying the result.
    printf("Hypotenuse of the right-angled triangle = %.2f\n", hypotenuse);

    return 0;
}
