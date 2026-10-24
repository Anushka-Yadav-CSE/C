// A program to display the remaining shares.
#include <stdio.h>
int main() {

    int shares1 = 3000, nominal = 10, rateDividend = 10, div = 2000;

    // Calculations.
    double shares;
    shares = (div * 100) / (nominal * rateDividend);
    double total = shares1 - shares;

    // Printing the result.
    printf("Shares left to purchase = %.2f\n", total);

    return 0;
}