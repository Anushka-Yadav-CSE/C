// A program to display area, perimeter or diagonal of a rectangle based on user input.
#include <stdio.h>
#include<math.h>
int main() {
    printf("1: For Area.\n");
    printf("2: For Perimeter.\n");
    printf("3: For Diagonal.\n");

    // Get user choice
    int choice;
    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Perform action based on user choice
    switch(choice) {
        case 1: {
            double length, breadth;
            printf("Enter the length: ");
            if (scanf("%lf", &length) != 1 || length <= 0)  {
                printf("Invalid Input!\n");
                return 1;
            }

            printf("Enter the breadth: ");
            if (scanf("%lf", &breadth) != 1 || breadth <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }

            double area = length * breadth;
            printf("Area of the rectangle = %.2f\n", area);

            break;
        }

        case 2: {
            double length, breadth;
            printf("Enter the length: ");
            if (scanf("%lf", &length) != 1 || length <= 0)  {
                printf("Invalid Input!\n");
                return 1;
            }

            printf("Enter the breadth: ");
            if (scanf("%lf", &breadth) != 1 || breadth <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }

            double perimeter = 2 * (length + breadth);
            printf("Perimeter of the rectangle = %.2f\n", perimeter);

            break;
        }

        case 3: {
            double length, breadth;
            printf("Enter the length: ");
            if (scanf("%lf", &length) != 1 || length <= 0)  {
                printf("Invalid Input!\n");
                return 1;
            }

            printf("Enter the breadth: ");
            if (scanf("%lf", &breadth) != 1 || breadth <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }

            double diagonal = sqrt((length * length) + (breadth * breadth));
            printf("Diagonal of the rectangle = %.2f\n", diagonal);

            break;
        }

        default: {
            printf("Invalid Choice! Please choose between 1 to 3.\n");

            break;
        }
    }

    return 0;
}