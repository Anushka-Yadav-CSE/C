// A program to calcuate profit and loss of a product.
#include <stdio.h>
int main() {

    double cp, sp;

    // Get input from the user.
    printf("Enter the cost price of the product: ");
    if (scanf("%lf", &cp) != 1 || cp <= 0) {
        printf("Invalid input for cost price.\n");
        return 1;
    }

    printf("Enter the selling price of the product: ");
    if (scanf("%lf", &sp) != 1 || sp <= 0) {
        printf("Invalid input for selling price.\n");
        return 1;
    }

    // Condition to check whether sp is greater than, less than or equal to cp.
    if (sp > cp) {
        double profit = sp - cp;
        double profitPercent = (profit / cp) * 100.0;

        printf("Profit = %.2f\n", profit);
        printf("Profit Percent = %.2f\n", profitPercent);
    }
    else if (cp > sp) {
        double loss = cp - sp;
        double lossPercent = (loss / cp) * 100.0;

        printf("Loss = %.2f\n", loss);
        printf("Loss Percent = %.2f\n", lossPercent);
    }
    else {
        printf("Neither profit nor loss.\n");
    }

    return 0;
}