// A program to display the difference of user-entered numbers by using function.
#include <stdio.h>
int main() {

    // Function Prototype.
    double dif(int);
    int n;

    printf("Enter the number of terms: ");
    if(scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid Input! Number must be a positive integer.\n");
        return 1;
    }

    // Calling the function.
    double c = dif(n);

    printf("Difference = %.2f\n", c);

    return 0;
}
// Function to calculate the difference of n numbers.
double dif(int n) {

    double a;
    double s = 0.0;

    for(int i = 1; i <= n; i++) {

        printf("Enter the number: ");
        if(scanf("%lf", &a) != 1) {
        printf("Invalid Input! Number must be a real number.\n");
        return 0.0;
        }

        if (i == 1) {
            s = a;
        }
        else {
            s = s -a;
        }
    }
    
    return s;
}