// A program to display the equivalent resistance of series and parallel resistors.
#include <stdio.h>
int main() {

    // Get input from the user.
    double r1, r2;
    printf("Enter the value of first resistance: ");
    if (scanf("%lf", &r1) != 1 || r1 < 0) {
        printf("Invalid Input!\n");
        return 1;
    }

    printf("Enter the value of second resistance: ");
    if (scanf("%lf", &r2) != 1 || r2 < 0) {
        printf("Invalid Input!\n");
        return 1;
    }

    // Calculate equivalent resistance in series.
    double rS = r1 + r2;
    printf("In Series: \n");
    printf("Equivalent Resistance = %.2f\n", rS);

    if (r1 + r2 != 0) {

        // Calculate equivalent resistance in parallel.
        double rP = r1 * r2 / (r1 + r2);
        printf("In Parallel: \n");
        printf("Equivalent Resistance = %.2f\n", rP);

    }
    else {
        printf("Wrong Input! r1 + r2 should not be 0 for equivalent resistance in parallel.\n");
    }

    return 0;
}