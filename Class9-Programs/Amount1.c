/* A program to input age and salary and if age is greater than or equal to 50 and salary is less than or equal to 60,000,
increment will be 10,000 else it will be 5,000. If age is less than 50, increment will be 3,000. */
#include <stdio.h>
int main() {
    int age; double salary;
    // Prompt the user to enter the age and salary.
    printf("Enter the age: ");
    scanf("%d", &age);
    printf("Enter the salary: ");
    scanf("%lf", &salary);
    // Condition to check the age and salary and increment accordingly.
    if (age >= 50 && salary <= 60000) {
        salary = salary + 10000;
        printf("Age = %d\n", age);
        printf("Increment is 10,000\n");
        printf("Salary after increment = %.3f\n", salary);
    }
    else if (age >= 50 && salary > 60000) {
        salary = salary + 5000;
        printf("Age = %d\n", age);
        printf("Increment is 5,000\n");
        printf("Salary after increment = %.3f\n", salary);
    }
    else {
        salary = salary + 3000;
        printf("Age = %d\n", age);
        printf("Increment is 3,000\n");
        printf("Salary after increment = %.3f\n", salary);
    }
    return 0;
}