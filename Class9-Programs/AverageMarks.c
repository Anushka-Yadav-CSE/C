// A program to display the average marks in 3 subjects in rounded-off form.
#include <stdio.h>
#include <math.h>
int main() {
    double biology, physics, chemistry;

    // Taking input from the user.
    printf("Enter the marks of biology: ");
    if (scanf("%lf", &biology) != 1 || biology < 0) {
        printf("Invalid Input! Marks should be greater than or equal to 0.");
        return 1;
    }

    printf("Enter the marks of physics: ");
    if (scanf("%lf", &physics) != 1 || physics < 0) {
        printf("Invalid Input! Marks should be greater than or equal to 0.");
        return 1;
    }
    
    printf("Enter the marks of chemistry: ");
    if (scanf("%lf", &chemistry) != 1 || chemistry < 0) {
        printf("Invalid Input! Marks should be greater than or equal to 0.");
        return 1;
    }

    // Calculations.
    double avg = (biology + physics + chemistry) / 3.0;
    double avg1 = round(avg);

    // Printing the result.
    printf("Average of marks = %.3f\n", avg);
    printf("Rounded value of average marks = %.2f\n", avg1);

    return 0;
}