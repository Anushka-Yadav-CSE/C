/* A program to find and display the value of the given expression:-
(x + 3) / 6 - (2x + 5)/3 */
#include <stdio.h>
int main() {
    // Declaration of variables.
    float x, exp;
    // Prompt the user to enter the value of x.
    printf("Enter the value of x: ");
    scanf("%f", &x);
    // Calculation
    exp = ((x + 3) / 6) - ((2 * x + 5) / 3);
    // Printing the result.
    printf("Value of the expression = %.3f", exp);
    // Returns 0 to indicate successful execution.
    return 0;
}