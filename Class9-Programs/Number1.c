// A program to display the cube and square of the numbers.
#include <stdio.h>
int main() {
    int a, b;

    // Taking input from the user.
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

    // Comparing the numbers and performing operations accordingly.
    if (a > b) {
        int square = b * b;
        int cube = a * a * a;
        printf("Square of the number = %d\n", square);
        printf("Cube of the number = %d\n", cube);
    }

    else if (a < b) {
        int square = a * a;
        int cube = b * b * b;
        printf("Square of the number = %d\n", square);
        printf("Cube of the number = %d\n", cube);
    }
    else {
        printf("Both the numbers are equal.\n");
    }

    return 0;
}