// A program to convert a temperature in Fahrenheit to Celsius.
#include <stdio.h>
int main() {
    double f, c;
    // Taking input from the user.
    printf("Enter the temperature in Fahrenheit: ");
    if (scanf("%lf", &f) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    // Calculations.
    c = (5.0 * (f - 32.0)) / 9.0;
    // Printing the result.
    printf("Temperature in Celsius = %.2f", c);
    return 0;
}