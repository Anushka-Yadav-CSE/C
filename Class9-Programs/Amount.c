// A program to separate amount into rupee and paisa. 
#include <stdio.h>
int main() {
    int rupee, paisa;
    double amount;
    // Prompting the user to enter the amount.
    printf("Enter the amount: ");
    scanf("%lf", &amount);
    // Calculations.
    rupee = (int) amount;
    paisa = (amount - rupee) * 100;
    // Printing the result.
    printf("Amount = %.2f\n", amount);
    printf("Rupee = %d\n", rupee);
    printf("Paisa = %d\n", paisa);

    return 0;
}