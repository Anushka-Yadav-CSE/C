// A program to check whether the entered number is even or not.
#include <stdio.h>
int main() {
    int number;
    // Prompt the user to enter the number.
    printf("Enter the number: ");
    scanf("%d", &number);
    // Condition to check whether the number is even or not and display the same.
    if (number % 2 == 0) {
        printf("The number is an even number.\n");
    }
    else {
        printf("The number is an odd number.\n");
    }
    return 0;
}