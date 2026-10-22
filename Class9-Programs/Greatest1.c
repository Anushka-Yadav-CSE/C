// A program to print the greatest of three numbers.
#include <stdio.h>
int main() {
    int a, b, c; 

    // Prompt the user to enter the numbers.
    printf("Enter the first number: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid Input! Number must be an integer!\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%d", &b) != 1) {
        printf("Invalid Input! Number must be an integer!\n");
        return 1;
    }

    printf("Enter the third number: ");
    if (scanf("%d", &c) != 1) {
        printf("Invalid Input! Number must be an integer!\n");
        return 1;
    }

    // Condition to check the greatest number and display the same.
    if (a != b && b != c && a != c) {
        if ((a > b) && (a > c)) {
            printf("%d is the greatest number.\n", a);
        }
        else if ((b > a) && (b > c)) {
            printf("%d is the greatest number.\n", b);
        }
        else {
            printf("%d is the greatest number.\n", c);
        }
    }
    else {
        printf("INVALID INPUT! Numbers must be unequal.");
    }
    
    return 0;
}
