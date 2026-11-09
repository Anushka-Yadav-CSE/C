// A program to demonstrate the use of the rand function.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    // Seeding the random number generator using the current time.
    srand(time(NULL));
    // Generating a random number between 1 and 10.
    int a = rand() % 10 + 1;

    // Printing the result.
    printf("Random number between 1 and 10 = %d\n", a);

    return 0;
}