/* A program to accept the salary and display the amounts deducted for provident fund, house
   rent and children's education. */
#include <stdio.h>
int main() {
    double salary;

    // Taking input from the user.
    printf("Enter the salary: ");
    if (scanf("%lf", &salary) != 1) {
        printf("Invalid Input! Salary must be a positive real number.\n");
        return 1;
    }
    // Condition to check whether salary is a positive real number or not.
    if (salary > 0) {
        // Calculations.
        double pf = salary * (12.0 / 100.0);
        double remsal = salary - pf;
        double rent = remsal * (10.0 / 100.0);
        remsal = remsal - rent;
        double edu = remsal * (10.0 / 100.0);

        // Printing the result.
        printf("Amount contributed to the Provident Fund = %.2f\n", pf);
        printf("Amount spent on house rent = %.2f\n", rent);
        printf("Amount spent on education of the children = %.2f\n", edu);
    }
    else {
        printf("Invalid Input! Salary must be a positive real number.\n");
    }

    return 0;
}