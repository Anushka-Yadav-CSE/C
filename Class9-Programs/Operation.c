// A program to display sum, difference and product as per the user's choice.
#include <stdio.h>
int main() {
    printf("a: For Addition.\n");
    printf("b: For Subtraction.\n");
    printf("c: For Multiplication.\n");

    // Taking input from the user for the operation choice
    char choice;
    printf("Enter your choice: ");
    if (scanf("%c", &choice) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Using switch statement to perform the operation based on user's choice
    switch(choice) {
        case 'a': {
            double a, b;
            printf("Enter the first number: ");
            if(scanf("%lf", &a) != 1) {
                printf("Invalid Input!\n");
            }

            printf("Enter the second number: ");
            if(scanf("%lf", &b) != 1) {
                printf("Invalid Input!\n");
            }

            double sum = a + b;
            printf("Sum = %.2f\n", sum);

            break;
        }

        case 'b': {
            double a, b;
            printf("Enter the first number: ");
            if(scanf("%lf", &a) != 1) {
                printf("Invalid Input!\n");
            }

            printf("Enter the second number: ");
            if(scanf("%lf", &b) != 1) {
                printf("Invalid Input!\n");
            }

            double difference = a - b;
            printf("Difference = %.2f\n", difference);

            break;
        }

        case 'c': {
            double a, b;
            printf("Enter the first number: ");
            if(scanf("%lf", &a) != 1) {
                printf("Invalid Input!\n");
            }

            printf("Enter the second number: ");
            if(scanf("%lf", &b) != 1) {
                printf("Invalid Input!\n");
            }

            double product = a * b;
            printf("Product = %.2f\n", product);

            break;
        }

        default: {
            printf("Invalid Choice! Please choose either a, b or c.\n");

            break;
        }
    }

    return 0;
}