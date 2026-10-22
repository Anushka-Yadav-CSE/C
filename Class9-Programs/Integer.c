// A program to add two integer numbers using a function with argument.
#include <stdio.h>
int main() {
    int add(int,int);
    int a, b, c;

    // Taking input from the user.
    printf("Enter the first number: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid Input! Number must be an integer.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%d", &b) != 1) {
        printf("Invalid Input! Number must be an integer.\n");
        return 1;
    }

    // Calling the function to find the sum of the numbers.
    c = add(a,b);

    // Printing the sum of the numbers.
    printf("Sum = %d\n", c);

    return 0;
}
// Function to find the sum of two numbers.
int add(int a, int b)
{
    int c = a + b;
    return (c);
}
