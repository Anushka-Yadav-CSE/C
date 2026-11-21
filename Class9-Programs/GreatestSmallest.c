// A program to input 3 numbers and display the greatest and the smallest number.
#include <stdio.h>
int main() {

    // Get input from the user.
    int a, b, c;
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

    if (a != b && a != c && b != c) {
        // Compare the numbers to find the smallest and greatest.
        if (a < b && a < c) {
            printf("%d is the smallest number.\n", a);
        }
        else if (b < a && b < c) {
            printf("%d is the smallest number.\n", b);
        }
        else {
            printf("%d is the smallest number.\n", c);
        }

        if (a > b && a > c) {
            printf("%d is the greatest number.\n", a);
        }
        else if (b > a && b > c) {
            printf("%d is the greatest number.\n", b);
        }
        else {
            printf("%d is the greatest number.\n", c);
        }
    }
    else {
        printf("Invalid Input! All three numbers must be unequal!\n");
    }

    return 0;
}