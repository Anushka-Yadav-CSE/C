// A program to calculate and display area of different geometrical figures by user's choice.
#include <stdio.h>
#define PI 3.14159
int main() {
    int choice, n;
    do {
        printf("Enter the value of n( 1 to continue and 0 to exit): ");
        if (scanf("%d", &n) != 1) {
            printf("Invalid Input!\n");
            return 1;
        }
        if (n == 0) {
            break;
        }
        if (n == 1) {
            // Prompt the user to enter the choice.
            printf("1: Area of Circle.\n");
            printf("2: Area of Square.\n");
            printf("3: Area of Rectangle.\n");
            printf("4: Area of Triangle.\n");
            printf("Enter your choice: ");
            if (scanf("%d", &choice) != 1) {
                printf("Invalid Input!\n");
                return 1;
            }
            // Switch case to find the area as per user's choice and display accordingly.
            switch (choice) {
                case 1: {
                    double area, radius;  
                    printf("Enter the radius of the circle: ");
                    if (scanf("%lf", &radius) != 1) {
                        printf("Invalid Input!\n");
                        return 1;
                    }
                    if ( radius > 0) {
                        area = PI * radius * radius;
                        printf("Radius of the circle = %.3f\n", radius);
                        printf("Area of the circle = %.3f\n", area);
                    }
                    else {
                        printf("Invalid Input! Radius must be positive.\n");
                    }
                    break;
                }
                case 2: {
                    double side, area;
                    printf("Enter the side of the square: ");
                    if (scanf("%lf", &side) != 1) {
                        printf("Invalid Input!\n");
                        return 1;
                    }
                    if (side > 0) {
                        area = side * side;
                        printf("Side of the square = %.3f\n", side);
                        printf("Area of the square = %.3f\n", area);
                    }
                    else {
                        printf("Invalid Input! Side must be positive.\n");
                    }
                    break;
                }
                case 3: {
                    double length, breadth, area;
                    printf("Enter the length of the rectangle: ");
                    if (scanf("%lf", &length) != 1) {
                        printf("Invalid Input!\n");
                        return 1;
                    }
                    printf("Enter the breadth of the rectangle: ");
                    if (scanf("%lf", &breadth) != 1) {
                        printf("Invalid Input!\n");
                        return 1;
                    }
                    if (length > 0 && breadth > 0) {
                        area = length * breadth;
                        printf("Length of the rectangle = %.3f\n", length);
                        printf("Breadth of the rectangle = %.3f\n", breadth);
                        printf("Area of the rectangle = %.3f\n", area);
                    }
                    else {
                        printf("Invalid Input! Length and breadth must be positive.\n");
                    }
                    break;
                }
                case 4: {
                    double base, height, area;
                    printf("Enter the base of the triangle: ");
                    if (scanf("%lf", &base) != 1) {
                        printf("Invalid Input!\n");
                        return 1;
                    }
                    printf("Enter the height of the triangle: ");
                    if (scanf("%lf", &height) != 1) {
                        printf("Invalid Input!\n");
                        return 1;
                    }
                    if (base > 0 && height > 0) {
                        area = (1.0 / 2.0) * base * height;
                        printf("Base of the triangle = %.3f\n", base);
                        printf("Height of the triangle = %.3f\n", height);
                        printf("Area of the triangle = %.3f\n", area);
                    }
                    else {
                        printf("Invalid Input! Base and height must be positive.\n");
                    }
                    break;
                }
                default: {
                    printf("Invalid Choice. Choose from 1 to 4.\n");
                    break;
                }
            }
        }
        else {
            printf("Invalid Input! n must be either 1 (continue) or 0 (exit).\n");
        }
    }
    while (n != 0);
    return 0;
}