// A program to calculate the sum of user-entered numbers using a function.
#include <stdio.h>
// Function prototype.
double sum(int);
int main() {
    int n;

    // Taking the number of terms as input.
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid Input! Number of terms must be a positive integer.\n");
        return 1;
    }

    // Calling the sum function.
    double c = sum(n);
    printf("Sum of all the numbers = %.3f\n", c);
    return 0;
}
// Function to calculate the sum of n numbers.
double sum(int n) {

    double a, s = 0.0;

    for (int i = 0; i < n; i++) {

        printf("Enter the number: ");
        if (scanf("%lf", &a) != 1) {
            printf("Invalid Input!\n");
            return 0.0;
        }
        s = s + a;
    }
    return s;
}