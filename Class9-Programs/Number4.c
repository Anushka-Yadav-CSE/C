/* A program to check whether 3 numbers are unequal or not.
If true, display the greatest otherwise print "Numbers are not unequal." */
#include <stdio.h>
int main() {

    int a, b, c;

    // Get input from the user.
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

    // Check whether all numbers are unequal and find the greatest.
    if (a != b && b != c && a != c) {
        if (a > b && a > c) {
            printf("Greatest Number = %d\n", a);
        }
        else if (b > a && b > c) {
            printf("Greatest Number = %d\n", b);
        }
        else {
            printf("Greatest Number = %d\n", c);
        }
    }
    else {
        printf("Numbers are not unequal!\n");
    }

    return 0;
}