// A program to find and display the percentage of boys and girls in a class.
#include <stdio.h>
int main() {
    int m, n;

    // Taking input from the user.
    printf("Enter the total number of students in the class: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input! Number must be an integer.\n");
        return 1;
    }

    printf("Enter the number of girls in the class: ");
    if (scanf("%d", &m) != 1) {
        printf("Invalid Input! Number must be an integer.\n");
        return 1;
    }

    // Calculations.
    int b = n - m;
    double percentG = (m / (double) n) * 100;
    double percentB =(b / (double) n) * 100;

    // Printing the result.
    printf("Percentage of girls in the class = %.2f\n", percentG);
    printf("Percentage of boys in the class = %.2f\n", percentB);

    return 0;
}
