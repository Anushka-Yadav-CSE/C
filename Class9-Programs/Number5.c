// A program to check whether two entered numbers are perfect square numbers or not.
#include <stdio.h>
#include <math.h>
int main() {

    // Get input from the user.
    int a, b;
    printf("Enter the first number: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid Input!\n");
        return 1;
    } 

    printf("Enter the second number: ");
    if (scanf("%d", &b) != 1) {
        printf("Invalid Input!\n");
        return 1;
    } 

    // Check if the numbers are negative.
    if (a < 0 || b < 0) {
        printf("Square Root of a negative number cannot be determined.\n");
    }
    // Check if the numbers are perfect squares.
    else {
        int s1 = (int)sqrt(a);
        if (s1 * s1 == a) {
            printf("%d is a perfect square!\n", a);
        }
        else {
            printf("%d is not a perfect square!\n", a);
        }
        int s2 = (int)sqrt(b);
        if (s2 * s2 == b) {
            printf("%d is a perfect square!\n", b);
        }
        else {
            printf("%d is not a perfect square!\n", b);
        }
    }

    return 0;
}