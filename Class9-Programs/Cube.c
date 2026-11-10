// A program to display the side of the cube.
#include <stdio.h>
#include <math.h>
int main() {
    double volume;
    printf("Enter the volume of the cube: ");
    if (scanf("%lf", &volume) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    double side = cbrt(volume);
    printf("Side of the cube = %.2f\n", side);
    printf("Volume of the cube = %.2f\n", volume);

    return 0;
}