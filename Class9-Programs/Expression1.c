/* A program to print the following expression: 
D = (a * a + b * b + c * c) / (a * b * c) */
#include <stdio.h>
int main() {
    double a, b, c, d;
    // Taking input from the user.
    printf("Enter the value of a: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    // Taking input from the user.
    printf("Enter the value of b: ");
    if (scanf("%lf", &b) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    // Taking input from the user.
    printf("Enter the value of c: ");
    if (scanf("%lf", &c) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    // Checking if a, b, and c are not zero to avoid division by zero.
    if ( a != 0 && b != 0 && c != 0) {
        d = (a * a + b * b + c * c) / (a * b * c);
        printf("D = %.3f\n" , d);
    }
    else {
        printf("Invalid Input! Value of a, b and c must not be 0.\n");
    }
    return 0;
}