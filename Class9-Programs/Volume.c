// A program to calculate and display volume as per the user's choice.
#include <stdio.h>
#define PI 3.141
int main() {

    printf("1: For Cuboid.\n");
    printf("2: For Cylinder.\n");
    printf("3: For Cone.\n");

    // Get input from the user.
    int choice;
    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Compare the choice to calculate the volume of the selected shape.
    switch (choice) {
        case 1: {
            double l, b, h;
            printf("Enter the length: ");
            if (scanf("%lf", &l) != 1 || l <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }
            printf("Enter the breadth: ");
            if (scanf("%lf", &b) != 1 || b <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }
            printf("Enter the height: ");
            if (scanf("%lf", &h) != 1 || h <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }
            double volume = l * b * h;
            printf("Volume of the cuboid = %.2f\n", volume);

            break;
        }

        case 2: {
            double r, h;
            printf("Enter the radius: ");
            if (scanf("%lf", &r) != 1 || r <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }
            
            printf("Enter the height: ");
            if (scanf("%lf", &h) != 1 || h <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }
            double volume = PI * r * h * r;
            printf("Volume of the cylinder = %.2f\n", volume);

            break;
        }
        case 3: {
            double r, h;
            printf("Enter the radius: ");
            if (scanf("%lf", &r) != 1 || r <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }

            printf("Enter the height: ");
            if (scanf("%lf", &h) != 1 || h <= 0) {
                printf("Invalid Input!\n");
                return 1;
            }
            double volume = (1.0 / 3.0) * (PI * r * r * h);
            printf("Volume of the cone = %.2f\n", volume);

            break;
        }

        default: {
            printf("Wrong Choice! Please choose between 1 and 3.\n");

            break;
        }
    }

    return 0;
}