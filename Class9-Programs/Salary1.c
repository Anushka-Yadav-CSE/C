// A program to input the name and basic salary and display the gross salary and net salary of the employee.
#include <stdio.h>
int main() {
    char name[20];
    double salary;

    // Taking input from the user.
    printf("Enter the name of the employee: ");
    fgets (name, sizeof(name), stdin);
    printf("Enter the basic salary: ");
    if (scanf("%lf", &salary) != 1) {
        printf("Invalid Input! Salary must be a positive real number.\n");
        return 1;
    }

    if (salary > 0) {
        // Calculations.
        double da = (30.0 / 100.0) * salary;
        double hra = (12.5 / 100.0) * salary;
        double pf = (10.0 / 100.0) * salary;
        double gross = da + hra + salary;
        double net = gross - pf;

        // Printing the result.
        printf("Employee's Name = %s\n", name);
        printf("Gross Pay = %.2f\n", gross);
        printf("Net Pay = %.2f\n", net);
    }
    else {
        printf("Invalid Input! Salary must be a positive real number.\n");
    }

    return 0;
}