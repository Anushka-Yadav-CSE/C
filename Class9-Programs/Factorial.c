// A program to print a factorial of a number.
#include <stdio.h>
int main() {
    int number, a = 1;
    // Prompt the user to enter the number.
    printf("Enter the number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    // Condition to check if the number is positive, negative or zero and calculate the factorial accordingly.
    if (number > 0) {
        printf("The factorial of %d = ", number);
        for (int i = 1; i <= number; i++) {
            a = a * i;
        }
        printf("%d ", a);
    }
    else if (number == 0) {
        printf("The factorial of %d = 1\n", number);
    }
    else {
        printf("Invalid Input! Factorial's of negative numbers are not defined.\n");
    }
    return 0;
}