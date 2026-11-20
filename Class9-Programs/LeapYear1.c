// A program to check whether a year is a leap year, a century
// leap year or not a leap year.
#include <stdio.h>
int main() {

    // Get input from the user.
    int year;
    printf("Enter the year: ");
    if (scanf("%d", &year) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Check if the year is a leap year, a century leap year or not a leap year.
    if (year % 400 == 0) {
        printf("The year is a century leap year.\n");
    }
    else if (year % 100 == 0) {
        printf("The year is a century year.\n");
    }
    else if (year % 4 == 0) {
        printf("The year is a leap year.\n");
    }
    else {
        printf("The year is neither a leap year nor a century year.\n");
    }

    return 0;
}