// A program to convert time in hours, minutes and seconds.
#include <stdio.h>
int main() {
    int timeinSec;

    // Taking input from the user.
    printf("Enter the time in seconds: ");
    if (scanf("%d", &timeinSec) != 1) {
        printf("Invalid Input! Time must be a positive integer.\n");
        return 1;
    }

    // Condition to check whether time entered is positive.
    if (timeinSec > 0) {

        // Calculations.
        int a = timeinSec;
        int hr = timeinSec / 3600;
        int remSec = timeinSec - (hr * 3600);
        int min = remSec / 60;
        int sec = remSec - (min * 60);

        // Printing the result.
        printf("The time in seconds = %d\n", a);
        printf("%d hours %d minutes %d seconds\n", hr, min, sec);
    }
    else {

        // Displaying the invalid-input message.
        printf("Invalid Input!Time must be a positive number.\n");
    }

    return 0;
}