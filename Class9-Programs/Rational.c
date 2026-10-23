// A program to display 3 rational numbers between two numbers.
#include <stdio.h>
int main() {
    double m, n;

    // Taking input from the user.
    printf("Enter the first number: ");
    if (scanf("%lf", &m) != 1) {
        printf("Invalid Input! Number must be a real number.\n");
        return 1;
    }
    printf("Enter the second number: ");
    if (scanf("%lf", &n) != 1) {
        printf("Invalid Input! Number must be a real number.\n");
        return 1;
    }

    if (m < n) {
        // Calculations.
        double a = (m + n) / 2.0;
        double b = (m + a) / 2.0;
        double c = (b + n) / 2.0;

        // Printing the result.
        printf("Rational numbers between %.2f and %.2f:\n", m, n);
        printf("%.2f\n", a);
        printf("%.2f\n", b);
        printf("%.2f\n", c);
    } 
    else if (m > n) {
        // Calculations.
        double f = m;
        m = n;
        n = f;
        double a = (m + n) / 2.0;
        double b = (m + a) / 2.0;
        double c = (b + n) / 2.0;

        // Printing the result.
        printf("Rational numbers between %.2f and %.2f:\n", m, n);
        printf("%.2f\n", a);
        printf("%.2f\n", b);
        printf("%.2f\n", c);
    } 
    else {
        printf("Invalid Input! Both the numbers must be unequal.\n");

    }

    return 0;
}