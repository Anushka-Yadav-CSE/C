// A program to display the final velocity.
#include <stdio.h>
#include <math.h>
int main() {
    double u, a, s;

    // Taking input from the user.
    printf("Enter the initial velocity(u): ");
    if (scanf("%lf", &u) != 1 || u < 0) {
        printf("Invalid Input! u must be a real number and greater than or equal to 0.\n ");
        return 1;
    }

    printf("Enter the acceleration(a): ");
    if (scanf("%lf", &a) != 1 || a <= 0) {
        printf("Invalid Input! a must be a real number and greater than 0.\n ");
        return 1;
    }

    printf("Enter the distance covered(s): ");
    if (scanf("%lf", &s) != 1 || s <= 0) {
        printf("Invalid Input! s must be a real number and greater than 0.\n ");
        return 1;
    }

    // Calculating final velocity.
    double v = sqrt((u * u) + (2 * a * s));

    // Displaying final velocity.
    printf("Final velocity(v) = %.2f\n", v);

    return 0;
}