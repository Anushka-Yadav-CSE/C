// A program to calculate the product of user-entered numbers using a function.
#include<stdio.h>
int main() {

    // Function Prototype.
    double product(int);
    int n;
    double c;

    // Taking input from the user.
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid Input! Number must be a positve integer.\n");
        return 1;
    }

    // Calling the function.
    c = product(n);

    // Printing the result.
    printf("The product = %.2f\n", c);

    return 0;
}
// Function to calculate the product of n numbers. 
double product(int n) {
    double a, s = 1.0;
    for(int i = 1; i <= n; i++) {
        printf("Enter the number: ");
        if (scanf("%lf", &a) != 1) {
            printf("Invalid Input! Number must be a positive real number.\n");
            return 0.0;
        }
        s = s * a;

    }
    return s;
}