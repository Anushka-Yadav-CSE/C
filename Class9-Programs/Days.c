// A program to accept the day number and display the corresponding day name.
#include <stdio.h> 
int main() {
    int n, choice;
    // do while loop to continue the program until the user wants to exit.
    do {
        printf("Enter the value of n (1 to continue and 0 to exit): ");
        if (scanf("%d", &n) != 1) {
            printf("Invalid Input!");
            return 1;
        }
        if (n == 0) {
            break;
        }
        if (n == 1) {
            printf("1: For Monday\n");
            printf("2: For Tuesday\n"); 
            printf("3: For Wednesday\n");
            printf("4: For Thursday\n");
            printf("5: For Friday\n");
            printf("6: For Saturday\n");
            printf("7: For Sunday\n");
            printf("Enter the number of day: ");
            if (scanf("%d", &choice) != 1) {
                printf("Invalid Input!");
                return 1;
            }
            // Switch case to display the day's name as per the user's choice.
            switch (choice) {
                case 1: {
                    printf("Monday\n");
                    break;
                }
                case 2: {
                    printf("Tuesday\n");
                    break;
                }
                case 3: {
                    printf("Wednesday\n");
                    break;
                }
                case 4: {
                    printf("Thursday\n");
                    break;
                }
                case 5: {
                    printf("Friday\n");
                    break;
                }
                case 6: {
                    printf("Saturday\n");
                    break;
                }
                case 7: {
                    printf("Sunday\n");
                    break;
                }
                default: {
                    printf("Invalid Input! Number of days must be from 1 to 7.\n");
                    break;
                }
            }
        }
    }
    while (n != 0);
    return 0;
}