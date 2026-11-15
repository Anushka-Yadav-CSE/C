// A program to display the electricity bill.
#include <stdio.h>
int main() {
    char name[20];
    char month[10];
    int number;
    double units, bill;
    
    // Taking input from the user.
    printf("Enter the name of the consumer: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter the month: ");
    fgets(month, sizeof(month), stdin);

    printf("Enter the consumer number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    printf("Enter the units consumed: ");
    if (scanf("%lf", &units) != 1 || units <= 0) {
        printf("Invalid Input! Units must be greater than 0.\n");
        return 1;
    }

    // Calculating the electricity bill based on the units consumed.
    if (units <= 100) {
        bill = units * 1.80;
    }
    else if (units > 100 && units <= 300) {
        bill = units * 2.30;
    }
    else if (units > 300 && units <= 500) {
        bill = units * 2.80;
    }
    else if (units > 500) {
        bill = units * 3.50;
    }

    // Displaying the electricity bill.
    printf("Electricity Bill: \n");
    printf("Name = %s", name);
    printf("Consumer number = %d\n", number);
    printf("Month = %s", month);
    printf("Units consumed = %.2f\n", units);
    printf("Electricity bill = %.2f\n", bill);

    return 0;
}