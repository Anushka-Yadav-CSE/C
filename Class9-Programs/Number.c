// A program to check whether the entered number is positive, negative or zero and display the same.
#include <stdio.h>
int main() {
    int number;
    // Prompt the user to enter the number.
    printf("Enter the number: ");
    scanf("%d", &number);
    // Condition to check whether the number is 0, negative or positive.
    if (number == 0) {
        printf("The number is zero.\n");
    }
    else if (number < 0) {
        printf("The number is negative.\n");
    }
    else {
        printf("The number is positive.\n");
    }
    return 0;
}
