// A program to print the sum of two numbers by using function argument.
#include <stdio.h>
int main() {
    double a, b;

    // Function prototype.
    double add(double, double);

    // Taking input from user.
    printf("Enter the first number: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid Input! Number must be a real number.\n");
        return 1;
    }
    printf("Enter the second number: ");
    if (scanf("%lf", &b) != 1) {
        printf("Invalid Input! Number must be a real number.\n");
        return 1;
    }

    // Calling the add function.
    double d = add(a,b);
    printf("Sum = %.2f\n", d);
    return 0;
}
// Function to add two numbers.
double add(double a, double b) {
    double c = a + b;
    return c;
}
