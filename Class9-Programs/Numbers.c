// A program to display the sum and average of three numbers.
#include <stdio.h>
int main() {
    double a, b, c;
    // Taking input from the user.
    printf("Enter the first number: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    printf("Enter the second number: ");
    if (scanf("%lf", &b) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    printf("Enter the third number: ");
    if (scanf("%lf", &c) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    // Calculating the sum and average.
    double sum = a + b + c;
    double avg = sum / 3.0;
    // Displaying the sum and average.
    printf("Sum = %.3f\n", sum);
    printf("Average = %.3f\n", avg);

    return 0;
}