// A program to display the hundreds, tens, and units digits of a three-digit number.
#include <stdio.h>
int main() {
    int num;

    // Taking input from the user.
    printf("Enter the 3-digit number: ");
    if (scanf("%d", &num) != 1) {
        printf("INVALID INPUT!\n");
        return 1;
    }

    printf("The digits of the number are:\n");
    // Calculations.
    int a = num / 100;
    int b = num / 10;
    int c = b % 10;
    int d = num % 10;
    
    // Printing the result.
    printf("%d\n", a);
    printf("%d\n", c);
    printf("%d\n", d);

    return 0;
}
