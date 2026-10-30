// A program to display the absolute value of an integer number.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;

    // Taking input from the user.
    printf("Enter the number: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Calculating the absolute value of the number.
    int b = abs(a);

    // Displaying the absolute value of the number.
    printf("The absolute value of %d = %d\n", a, b);

    return 0;
}