/* A program to find and display all the angles of a quadrilateral when they are in the
ratio 3:4:5:6. */
#include <stdio.h>
int main() {
    // Declaring and assigning the ratio values.
    double a = 3, b = 4, c = 5, d = 6;
    // Calculations.
    double q = 360.0 / (a + b + c + d);
    a = 3 * q;
    b = 4 * q;
    c = 5 * q;
    d = 6 * q;
    // Printing the result.
    printf("Angle a = %.2f\n", a);
    printf("Angle b = %.2f\n", b);
    printf("Angle c = %.2f\n", c);
    printf("Angle d = %.2f\n", d);

    return 0;
}