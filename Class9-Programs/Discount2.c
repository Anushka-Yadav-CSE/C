// A program to calculate discount and the net amount.
#include <stdio.h>
int main() {
    double amount;
    char name[20];
    int choice;

    // Taking input from the user.
    printf("Enter the name of the customer: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter the amount: ");
    if (scanf("%lf", &amount) != 1 || amount <= 0) {
        printf("Invalid Input! Amount should be a positive real number.\n");
        return 1;
    }

    printf("1: For Air-Conditioner.\n");
    printf("2: For LCD.\n");

    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Calculate discount and total amount based on the product.
    switch(choice) {
        case 1: {
            double discount;
            if (amount <= 20000) {
                discount = amount * (5.0 / 100.0);
            }
            else if (amount > 20000 && amount <= 40000) {
                discount = amount * (7.5 / 100.0);
            }
            else if (amount > 40000 && amount <= 60000) {
                discount = amount * (10.0 / 100.0);
            }
            else {
                discount = amount * (12.0 / 100.0);
            }
            double remAmount = amount - discount;
            double tax = remAmount * (12.5 / 100.0);
            double totalAmount = tax + remAmount;

            printf("Customer's Name = %s", name);
            printf("Amount of the product = %.2f\n", amount);
            printf("Discount = %.2f\n", discount);
            printf("Tax = %.2f\n", tax);
            printf("Total amount to be paid = %.2f\n", totalAmount);

            break;
        }

        case 2: {
            double discount;
            if (amount <= 20000) {
                discount = amount * (2.5 / 100.0);
            }
            else if (amount > 20000 && amount <= 40000) {
                discount = amount * (5.0 / 100.0);
            }
            else if (amount > 40000 && amount <= 60000) {
                discount = amount * (7.0 / 100.0);
            }
            else {
                discount = amount * (8.5 / 100.0);
            }
            double remAmount = amount - discount;
            double tax = remAmount * (12.5 / 100.0);
            double totalAmount = tax + remAmount;

            printf("Customer's Name = %s", name);
            printf("Amount of the product = %.2f\n", amount);
            printf("Discount = %.2f\n", discount);
            printf("Tax = %.2f\n", tax);
            printf("Total amount to be paid = %.2f\n", totalAmount);

            break;            
        }

        default: {
            printf("Wrong Choice! Please choose either 1 or 2.\n");

            break;
        }
    }
}