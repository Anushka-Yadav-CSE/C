// A program to display the reverse a number.
#include <stdio.h>
int main() {
    // Declaration of variables.
    int number, a, rem = 0, b;

    // Prompting the user to enter the number.
    printf("Enter the number: ");
    scanf("%d", &number);
    
    a = number;

    // while loop to reverse the number.
    while (number != 0) {
        b = number % 10;
        rem = (10 * rem) + b;
        number = number / 10;
    }

    // Printing the result.
    printf("Number = %d\n", a);
    printf("Reverse of the number = %d\n", rem);

    return 0;
}
