/* A program to check whether a triangle is an acute-angled,
obtuse-angled or right-angled triangle as per the user's choice.*/
#include <stdio.h>
int main() {

    // Get input from the user.
    double a, b, c;
    printf("Enter the first angle: ");
    if (scanf("%lf", &a) != 1 || a <= 0 || a >= 180) {
        printf("Invalid Input!\n");
        return 1;
    }

    printf("Enter the second angle: ");
    if (scanf("%lf", &b) != 1 || b <= 0 || b >= 180) {
        printf("Invalid Input!\n");
        return 1;
    }

    printf("Enter the third angle: ");
    if (scanf("%lf", &c) != 1 || c <= 0 || c >= 180) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Check if the angles form a triangle.
    if(a + b + c == 180) {
        printf("1: For Acute-Angled Triangle.\n");
        printf("2: For Right-Angled Triangle.\n");
        printf("3: For Obtuse-Angled Triangle.\n");

        int choice;
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid Input!\n");
            return 1;
        }

        // Perform the operation based on user's choice.
        switch (choice) {
            case 1: {
                if (a < 90 && b < 90 && c < 90) {
                    printf("Acute-Angled Triangle.\n");
                }
                else {
                    printf("Not an Acute-Angled Triangle.\n");
                }

                break;
            }

            case 2: {
                if (a == 90 || b == 90 || c == 90) {
                    printf("Right-Angled Triangle.\n");
                }
                else {
                    printf("Not a Right-Angled Triangle.\n");
                }
                break;
            }

            case 3: {
                if (a > 90 || b > 90 || c > 90) {
                    printf("Obtuse-Angled Triangle.\n");
                }
                else {
                    printf("Not an Obtuse-Angled Triangle.\n");
                }

                break;
            }

            default: {
                printf("Wrong Choice.\n Please choose between 1 and 3.\n");

                break;
            }
        }
    }
    else {
        printf("The given angles do not form a triangle.\n");
    }
    return 0;
}