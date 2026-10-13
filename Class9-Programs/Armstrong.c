// A program to check whether a number is an Armstrong number or not.
#include <stdio.h>
int main() {
    int num, a, num1, power;
    int k = 0,d = 0, c;
    // Taking input from user.
    printf("Enter the number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    // Checking if the number is positive, zero or negative.
    if (num > 0) {
        a = num;
        // Counting the number of digits in the number.
        while(num != 0) {
            k++;
            num = num / 10;
        }
        num1 = a;
        // Calculating the sum of the k-th power of each digit.
        while(a != 0) {
            power = 1;
            c = a % 10;
            for (int i = 1; i <= k; i++) {
                power = power * c;
            }
            d = d + power;
            a = a / 10;
        }
        // Checking if the sum is equal to the original number.
        if (d == num1) {
            printf("The number is an Armstrong number.\n");
        }
        else {
            printf("The number is not an Armstrong number.\n");
        }
    }
    else if (num == 0) {
        printf("The number is an Armstrong number.\n");
    }
    else {
        printf("Invalid Input! Number must not be negative.\n");
    }
    return 0;
}   