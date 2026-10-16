// A program to accept 2 numbers and if their ratio is greater than 0, swap the numbers.
#include <stdio.h>
int main() {
    int a, b; double c = 0.0;
    // Prompt the user to enter the numbers.
    printf("Enter the value of first number: ");
    scanf("%d", &a);
    printf("Enter the value of second number: ");
    scanf("%d", &b);
    // Condition to check whether b is equal to 0 or not and perform operations based on that.
    if (b != 0) {
        c = (double)a / b;
        if ( c > 0) {
            a = a + b;
            b = a - b;
            a = a - b;
            printf("First number after being swapped = %d\n" , a);
            printf("Second number after being swapped = %d\n", b);
        }
        else {            
            printf("Ratio of both the numbers is not greater than 0.\n");
        }
    }
    else {
        printf("Invalid Input! Second number should not be 0.\n");
    }
    return 0;
}
