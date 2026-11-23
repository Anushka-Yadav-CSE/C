// A program to display the floor information of a shopping mall based on user input.
#include <stdio.h>
int main() {
    printf("1: Ground Floor.\n");
    printf("2: First Floor.\n");
    printf("3: Second Floor.\n");
    printf("4: Third Floor.\n");

    // Get the user's floor choice.
    printf("Enter your choice: ");
    int choice;
    if (scanf("%d", &choice) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Display floor information based on the user's choice.
    switch(choice) {
        case 1: {
            printf("Ground Floor: Kids Wear.\n");

            break;
        }
        case 2: {
            printf("First Floor: Ladies Wear.\n");

            break;
        }
        case 3: {
            printf("Second Floor: Designer Sarees.\n");

            break;
        }
        case 4: {
            printf("Third Floor: Men's Wear.\n");

            break;
        }
        default: {
            printf("Wrong Choice! Please enter between 1 and 4.\n");

            break;
        }
    }

    return 0;
}