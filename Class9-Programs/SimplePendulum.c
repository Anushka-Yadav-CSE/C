/* A program to take length (l) and acceleration due to gravity (g) as inputs and display the
   time period (t) of a simple pendulum. */
#include <stdio.h>
#include <math.h>
#define pi 3.141
int main() {
    double l, g;

    // Taking input from the user.
    printf("Enter the length: ");
    if (scanf("%lf", &l) != 1) {
        printf("Invalid Input! Length must be a positive real number.\n");
        return 1;
    }

    printf("Enter the acceleration due to gravity: ");
    if (scanf("%lf", &g) != 1) {
        printf("Invalid Input! Acceleration due to gravity must be a positive real number.\n");
        return 1;
    }

    // Condition to check whether l and g are greater than 0 or not. 
    if (l > 0 && g > 0) {
        // Calculation.
        double t = 2 * pi * sqrt(l / g);
        // Printing the result.
        printf("Time Period of the Simple Pendulum = %.2f\n", t);
    }
    else {
        // Printing the result.
        printf("Invalid Input! Length and acceleration due to gravity must be positive real numbers.\n");
    }

    return 0;
}