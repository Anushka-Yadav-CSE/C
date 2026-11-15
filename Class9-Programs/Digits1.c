// A program to check the number of digits of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter the number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    if (n >= 0 && n < 10) {
        int square = n * n;
        printf("The number is a one-digit number.\n");
        printf("Square of the number = %d\n", square);
    }
    else if (n >= 10 && n < 100) {
        double cuberoot = cbrt(n);
        printf("The number is a two-digit number.\n");
        printf("Cube root of the number = %.2f\n", cuberoot);
    }
    else if (n >= 100 && n < 1000) {
        double squareroot = sqrt(n);
        printf("The number is a three-digit number.\n");
        printf("Square root of the number = %.2f\n", squareroot);
    }
    else {
        printf("Invalid Input!\n");
    }
    
    return 0;
}