// A program to calculate mathematical functions based on user's choice.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    printf("1: For Natural Logarithm.\n");
    printf("2: Absolute value of the number.\n");
    printf("3: Square root of the number.\n");
    printf("4: Cube root of the number.\n");
    printf("5: Random number between 0 and 1.\n");

    // Get input from the user.
    int choice;
    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Perform the operation based on user's choice.
    switch(choice) {
        case 1: {
            double a;
            printf("Enter a number: ");
            if (scanf("%lf", &a) != 1) {
                printf("Invalid Input!\n");
                return 1;
            }
            if (a > 0) {
                double l = log(a);
                printf("Logarithm of the number = %.2f\n", l);
            }
            else {
                printf("Invalid Input! Number must be greater than 0.\n");
            }

            break;
        }
        case 2: {
            double a;
            printf("Enter a number: ");
            if (scanf("%lf", &a) != 1) {
                printf("Invalid Input!\n");
                return 1;
            }
            double absolute = fabs(a);
            printf("Absolute value of the number = %.2f\n", absolute);

            break;
        }
        case 3: {
            double a;
            printf("Enter a number: ");
            if (scanf("%lf", &a) != 1) {
                printf("Invalid Input!\n");
                return 1;
            }
            if (a >= 0) {
                double b = sqrt(a);
                printf("Square Root of the number = %.2f\n", b);
            }
            else {
                printf("Invalid Input! Number must be 0 or greater.\n");
            }

            break;
        }
        case 4: {
            double a;
            printf("Enter a number: ");
            if (scanf("%lf", &a) != 1) {
                printf("Invalid Input!\n");
                return 1;
            }
            double b = cbrt(a);
            printf("Cube Root of the number = %.2f\n", b);

            break;
        }
        case 5: {
            double a = (double)rand() / RAND_MAX;
            printf("Random Number between 0 and 1 = %.2f\n", a);

            break;
        }
        default: {
            printf("Wrong Choice! Please choose between 1 to 5.\n");

            break;
        }
    }
}