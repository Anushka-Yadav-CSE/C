// A program to print the fibonacci series upto the user's choice.
#include <stdio.h>
int main() {
    int num, a = 0, b = 1, c;
    // Taking input from the user.
    printf("Enter the number of terms: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    printf("The Fibonacci Series = ");
    // Loop to find the fibonacci series and print the same.
    for (int i = 0; i < num; i++) {
        printf("%d ", a);
        c = a + b;
        a = b; 
        b = c;
    }
    return 0;
}