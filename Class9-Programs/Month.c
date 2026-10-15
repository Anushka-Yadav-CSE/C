// A program to find the number of days of a particular month by user's choice.
#include <stdio.h>
int main() {
    int month;
    // Prompt the user to enter the month.
    printf("Enter the number of month: ");
    if (scanf("%d", &month) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    // Switch case to display the month with their number of days as per user's choice.
    switch(month) {
        case 1: {
            printf("January = 31 days\n");
            break;
        }
        case 2: {
            printf("February = 28 days\n");
            break;
        }
        case 3: {
            printf("March = 31 days\n");
            break;
        }
        case 4: {            
            printf("April = 30 days\n");
            break;
        }
        case 5: {
            printf("May = 31 days\n");
            break; 
        }
        case 6: {
            printf("June = 30 days\n");
            break; 
        }
        case 7: {
            printf("July = 31 days\n");
            break; 
        }
        case 8: {
            printf("August = 31 days\n");
            break; 
        }
        case 9: {
            printf("September = 30 days\n");
            break; 
        }
        case 10: {
            printf("October = 31 days\n");
            break;
        }
        case 11: {            
            printf("November = 30 days\n");
            break;
        }
        case 12: {
            printf("December = 31 days\n");
            break;
        }
        default: {
            printf("Invalid Input! Enter a month from 1 to 12.\n");
        }
    }
    return 0;
}
