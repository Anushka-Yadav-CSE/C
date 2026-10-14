// A program to check whether two numbers are equal or not.
#include <stdio.h>
int main() {
    int a,b;
    // Prompt the user to enter two numbers.
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    // Condition to check whether both the numbers are equal or not.
    if (a == b) {
        printf("Both the numbers are equal.\n");
    }
    else {
        printf("The numbers are unequal.\n");
    }
    return 0;
}