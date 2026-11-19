// A program to check divisibility of a number by 3 and 5.
#include <stdio.h>
int main() {
    // Get number from the user.
    int num;
    printf("Enter the number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Check divisibility by 3 and 5.
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is divisible by both 3 as well as 5.\n", num);
    }

    else if (num % 3 == 0 && num % 5 != 0) {
        printf("%d is divisible by 3 but not by 5.\n", num);
    }
    else if (num % 3 != 0 && num % 5 == 0) {
        printf("%d is divisible by 5 but not by 3.\n", num);
    }
    else {
        printf("%d is not divisible by either 3 or 5.\n", num);
    }

    return 0;
}