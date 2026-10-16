// A program to demonstrate prefix and postfix increment operators.
#include <stdio.h>
int main() {
    // Declaration of variables.
    int a, b, c;

    // Prompting the user to enter the value of a.
    printf("Enter the value of a: ");
    scanf("%d", &a);

    // Calculations.
    b = a ++;
    c = ++b - a++;

    // Printing the result.
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}
