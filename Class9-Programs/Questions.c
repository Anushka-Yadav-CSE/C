// A program to calculate and display the correct answers each candidate got out of 150 questions.
#include <stdio.h>
int main() {
    double percent1, percent2;
    int ans1, ans2;
    // Taking input from the user.
    printf("Enter the percentage of correct questions of candidate 1: ");
    if (scanf("%lf", &percent1) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    // Taking input from the user.
    printf("Enter the percentage of correct questions of candidate 2: ");
    if (scanf("%lf", &percent2) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    // Calculations.
    ans1 = (int)((percent1 / 100.0) * 150); 
    ans2 = (int)((percent2 / 100.0) * 150); 
    // Printing the result.
    printf("Correct answers given by 1st candidate: %d\n", ans1);
    printf("Correct answers given by 2nd candidate: %d\n", ans2);
    return 0;
}