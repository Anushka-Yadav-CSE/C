// A program to check Complementary or Supplementary as per the user's choice.
#include <stdio.h>
int main() {

    printf("s: For Supplementary Angle.\n");
    printf("c: For Complementary Angle.\n");

    // Get user's choice.
    char choice;
    printf("Enter your choice: ");
    if (scanf("%c", &choice) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // The switch statement to handle the user's choice.
    switch(choice) {
        case 's': {
            double a1, a2;
            printf("Enter the first angle: ");
            if (scanf("%lf", &a1) != 1 || a1 <= 0 || a1 >= 180) {
                printf("Invalid Input!\n");
                return 1;
            }

            printf("Enter the second angle: ");
            if (scanf("%lf", &a2) != 1 || a2 <= 0 || a2 >= 180) {
                printf("Invalid Input!\n");
                return 1;
            }

            double c = a1 + a2;

            if (c == 180) {
                printf("Supplementary Angle.\n");
            }
            else {
                printf("Not Supplementary Angle.\n");
            }

            break;
        }

        case 'c': {
            double a1, a2;
            printf("Enter the first angle: ");
            if (scanf("%lf", &a1) != 1 || a1 <= 0 || a1 >= 180) {
                printf("Invalid Input!\n");
                return 1;
            }

            printf("Enter the second angle: ");
            if (scanf("%lf", &a2) != 1 || a2 <= 0 || a2 >= 180) {
                printf("Invalid Input!\n");
                return 1;
            }

            double c = a1 + a2;

            if (c == 90) {
                printf("Complementary Angle.\n");
            }
            else {
                printf("Not Complementary Angle.\n");
            }

            break;
        }

        default: {
            printf("Invalid Choice! Please choose either 's' or 'c'.\n");

            break;
        }
    }

    return 0;
}