// A program to input two numbers and print their sum.
#include <stdio.h>
int main() {
    // Declaring variables to store the user input.
    int a, b, c;
    // Taking input from the user.
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    // Calculating the sum.
    c = a + b;
    // Printing the result.
    printf("Sum is %d", c);
    // Returning 0 to indicate successful execution.  
    return 0;
}