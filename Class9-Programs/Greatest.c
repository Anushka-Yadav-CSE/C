// A program to display the greater of two numbers using a function with arguments.
#include <stdio.h>
int main() {
    int max(int,int);
    int a, b, c;

    // Taking input from the user.
    printf("Enter the first number: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Exit the program with an error code.
    }

    printf("Enter the second number: ");
    if (scanf("%d", &b) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Exit the program with an error code.
    }

    // Calling the function to find the maximum number.
    c = max(a, b);

    // Printing the greatest number.
    printf("Greatest number = %d\n", c);
    return 0;
}
// Function to find the maximum of two numbers.
int max(int a, int b) {
    if (a > b) {
        return (a);
    }
    else if (a < b) {
        return (b);
    }
    else {
        printf("Both numbers are equal.\n");
        return (a); // or return (b); since they are equal
    }
}
