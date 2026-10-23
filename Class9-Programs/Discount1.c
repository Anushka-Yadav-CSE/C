/* A program to take printed price as input and display the amount to be paid by the 
 customer when the shopkeeper gives 10 % discount and the customer has to pay 6% GST on
 remaining amount. */
 #include <stdio.h>
 int main() {
    double price;

    // Taking input from the user.
    printf("Enter the printed price: ");
    if (scanf("%lf", &price) != 1) {
        printf("Invalid Input! Price must be a real positive real number.\n");
        return 1;
    }

    // Condition to check whether the price is greater than 0 or not.
    if (price > 0) {
        // Calculations.
        double discount = (10.0 / 100.0) * price;
        double rem = price - discount;
        double gst = (6.0 / 100.0) * rem;
        double total =  rem + gst;
        // Printing the result.
        printf("Total Amount to be paid by the customer = %.2f\n", total);
    }
    else {
        // Printing the result.
        printf("Invalid Input!Price must be a real positive real number.\n");
    }

    return 0;
 }