// A program to display the type of triangle.
#include <stdio.h>
int main() {
    double a, b, c;

    // Taking input from the user.
    printf("Enter the first side: ");
    if (scanf("%lf", &a) != 1 || a <= 0) {
        printf("Invalid Input! Side should be a positive real number.\n");
        return 1;
    }

    printf("Enter the second side: ");
    if (scanf("%lf", &b) != 1 || b <= 0) {
        printf("Invalid Input! Side should be a positive real number.\n");
        return 1;
    }

    printf("Enter the third side: ");
    if (scanf("%lf", &c) != 1 || c <= 0) {
        printf("Invalid Input! Side should be a positive real number.\n");
        return 1;
    }

    // Condition to check whether the three sides can form a triangle or not.
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        printf("Triangle is possible.\n");

        // Conditions to check the type of the triangle.
        if ((a == b) && (b == c)) {
            printf("The triangle is an Equilateral Triangle.\n");
        }
        else if ((a == b) || (b == c) || (c == a)) {
            printf("The triangle is an Isosceles Triangle.\n");
        }
        else {
            printf("The triangle is a Scalene Triangle.\n");
        }
    }
    else {
        printf("Triangle is not possible.\n");
    }

    return 0;
}