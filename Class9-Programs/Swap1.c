// A program to swap two numbers by using a third variable.
#include <stdio.h>
int main() {
    int a, b, c;

    // Prompting the user to enter the values.
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Printing the result.
    printf("Value of a before swapping = %d\n", a);
    printf("Value of b before swapping = %d\n", b);

    // Calculations.
    c = a;
    a = b;
    b = c;

    // Printing the result.
    printf("Value of a after swapping = %d\n", a);
    printf("Value of b after swapping = %d\n", b);

    return 0;
}