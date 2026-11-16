// A program to print a greeting message based on the user's input.
#include <stdio.h>
int main() {
    printf("1: For Morning Greeting.\n");
    printf("2: For Afternoon Greeting.\n");
    printf("3: For Evening Greeting.\n");
    printf("4: For Night Greeting.\n");

    // Taking input from the user.
    int choice;
    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid Input.\n");
        return 1;
    }

    // Using switch statement to print the appropriate greeting message.
    switch(choice) {
        case 1: {
            printf("Good Morning!!\n");

            break;
        }
        case 2: {
            printf("Good Afternnon!!\n");

            break;
        }
        case 3: {
            printf("Good Evening!!\n");

            break;
        }
        case 4: {
            printf("Good Night!!\n");

            break;
        }
        default: {
            printf("Wrong Choice! Please choose between 1 and 4.\n");

            break;
        }
    }
}