// A program to display the smallest of 3 numbers.
#include <stdio.h>
int main() {
    int a, b, c;
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
    printf("Enter the third number: ");
    if (scanf("%d", &c) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    int d = (a < b) ?
            ((a < c) ? a : c) :
            ((b < c) ? b : c);
    printf("The smallest among the 3 numbers = %d", d);

    return 0;
}