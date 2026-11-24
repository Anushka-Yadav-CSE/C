// A program to print the sum of 10 different numbers.
#include <stdio.h>
int main() {
    double a, sum = 0;
    printf("The sum of the numbers are: ");
    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &a) != 1) {
            printf("Invalid Input!\n");
            return 1;
        }
        sum = sum + a;
    }
    printf("Sum = %.2f\n", sum);

    return 0;
}