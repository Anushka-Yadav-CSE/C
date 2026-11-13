// A program to input 3 unequal numbers and find the second smallest number among them.
#include <stdio.h>
int main() {
    int a, b, c, secondSmallest;

    // Taking three unequal numbers as input.
    printf("Enter the first number: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%d", &b) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter the third number: ");
    if (scanf("%d", &c) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Condition to check whether all three numbers are equal.
    if (a == b || a == c || b == c) {
        printf("Invalid Input! Numbers must be unequal.\n");
    }
    else {
        // To find the second smallest number among a, b, and c.
        if ((a > b && a < c) || (a > c && a < b)) {
            secondSmallest = a;
        }
        else if ((b > a && b < c) || (b > c && b < a)) {
            secondSmallest = b;
        }
        else {
            secondSmallest = c;
        }
        printf("Second Smallest number = %d", secondSmallest);
    }

    return 0;
}    