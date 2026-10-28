// A program to print the product of two numbers by using function arguments.
#include <stdio.h>
int main() {
    // Function prototype.
    double product(double, double);
    double a, b;

    // Taking input from the user.
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

    // Calling the function.
    double c = product(a, b);

    // Printing the result.
    printf("Product = %.2f\n", c);

    return 0;
}
// Function to get prdouct of two numbers.
double product(double a, double b) {
    double c = a * b;
    return c;
}