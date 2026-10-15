// A program to check whether the entered year is a leap year or not.
#include <stdio.h>
int main() {
    int year;
    // Prompt the user to enter the year.
    printf("Enter the year: ");
    scanf("%d", &year);
    // Condition to check whether the entered year is a leap year or not and display the same.
    if (year % 4 == 0 && year % 100 != 0) {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}