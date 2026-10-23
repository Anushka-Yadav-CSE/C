// A program to display the result.
#include <stdio.h>
int main() {
    int a, b;

    // Taking input from the user.
    printf("Enter the first number: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid Input! Number must be an integer.\n");
        return 1;
    }
    printf("Enter the second number: ");
    if (scanf("%d", &b) != 1) {
        printf("Invalid Input! Number must be an integer.\n");
        return 1;
    }

    if (a != b) {
        // Calculations.
        int c = ((10 * a + b) + (10 * b + a)) / (a - b);
        // Printing the result.
        printf("The result = %d\n", c);
    }
    else {
        printf("Invalid Input! Numbers must be unequal.\n");
    }

    return 0;
}