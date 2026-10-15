// A program to find the fibonacci number.
#include <stdio.h>
int main() {
    int num, a = 0, b = 1, c;
    // Taking input from user.
    printf("Enter the term number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    // for loop to find the fibonacci number.
    for (int i = 0; i < num; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    // Printing the result.
    printf("The fibonacci number = %d\n", a);
    return 0;
}