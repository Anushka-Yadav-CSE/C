// A program to display the difference of two numbers by using function.
#include <stdio.h>
int main() {
    // Function prototype.
    double dif(double a, double b);
    double a , b;

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

    // Calling the function.
    double c = dif(a, b);

    printf("Difference = %.2f\n", c);

    return 0;
}
// Function to subtract two numbers.
double dif(double a, double b) {
    double c = a - b;
    return c;
}