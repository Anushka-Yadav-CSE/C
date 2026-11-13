// A program to display the sum and product of the numbers.
#include <stdio.h>
int main() {
    int a, b, c;
    char ch;

    // Taking input from the user.
    printf("Enter the character: ");
    if (scanf("%c", &ch) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    printf("Enter the first number: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%d", &b) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    printf("Enter the third number: ");
    if (scanf("%d", &c) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Checking the operation and performing the corresponding calculation.
    if (ch == 's') {
        int sum = a + b + c;
        printf("Sum of the numbers = %d\n", sum);
    }

    else if (ch == 'p') {
        int product = a * b * c;
        printf("Product of the numbers = %d\n", product);
    }

    else {
        printf("Invalid Character.\n");
    }

    return 0;
}