// A program to print a table of the user's choice.
#include <stdio.h>
int main() {
    int a;
    // Prompt the user to enter the number.
    printf("Enter the table: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    // Printing the table by using for loop.
    printf("The table of %d:\n", a);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", a, i, a * i);
    }
    return 0;
}
