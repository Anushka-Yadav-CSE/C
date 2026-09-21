#include <stdio.h>
int main() {
    // Declaration of variables.
    float article, d1, d2;
    float discount1, discount2, totalDiscount, amount;
    // Prompt the user to enter the values.
    printf("Enter the price of article: ");
    scanf("%f", &article);
    printf("Enter the first rate of discount: ");
    scanf("%f", &d1);
    printf("Enter the second rate of discount: ");
    scanf("%f", &d2);
    // Calculation
    discount1 = article * (d1 / 100.0);
    discount2 = (article - discount1) * (d2 / 100.0);
    totalDiscount = discount1 + discount2;
    amount = article - totalDiscount;
    // Printing the result.
    printf("Selling Price of the article = %.3f\n", amount);
    printf("Total discount given on the article = %.3f\n", totalDiscount);
    // Returns 0 to indicate successful execution.
    return 0;
}
