// A program to display the preceding odd and succeeding even numbers.
#include <stdio.h>
int main() {
    int number;

    // Taking input from the user.
    printf("Enter the number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Conditional statements to check if the number is positive even or negative odd.
    if (number >= 0 && number % 2 == 0) {
        int a = number + 2;
        int b = number + 4;
        int c = number + 6;

        printf("Number = %d\n", number);
        printf("Succeeding even numbers = %d, %d, %d \n",a, b, c);
    }
    else if (number < 0 && number % 2 != 0) {
        int a = number - 2;
        int b = number - 4;
        int c = number - 6;

        printf("Number = %d\n", number);
        printf("Preceding odd numbers = %d, %d, %d \n",a, b, c);        
    }
    else {
        printf("The number is neither a positive even nor a negative odd.\n");
    }

    return 0;
}