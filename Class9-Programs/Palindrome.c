// A program to check whether a number is a palindrome number or not.
#include <stdio.h>
int main() {
    int num, a, b, c = 0;
    // Taking input from the user.
    printf("Enter the number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    a = num;
    // Reversing the number.
    while (num != 0) {
        b = num % 10;
        c = c * 10 + b;
        num = num / 10;
    }
    // Condition to check whether the number is a palindrome number or not. 
    if ( c == a) {
        printf("The number is a Palindrome number.\n");
    }
    else {
        printf("The number is not a Palindrome number.\n");
    }
    return 0;
}
