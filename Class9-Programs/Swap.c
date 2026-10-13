// A program to swap two variables without using a third variable.
#include <stdio.h>
int main() {
    int a, b;

    // Prompting the user to input the values.
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Printing the result.
    printf("The value of a before swapping = %d\n", a);
    printf("The value of b before swapping = %d\n", b);
    // Calculations
    a = a + b;
    b = a - b;
    a = a - b;

    // Printing the result.
    printf("The value of a after swapping = %d\n", a);
    printf("The value of b after swapping = %d\n", b);

    return 0;
}