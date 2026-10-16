// A program to check whether a person is eligible to vote or not.
#include <stdio.h>
int main() {
    int age;
    // Prompt the user to enter the age.
    printf("Enter the age of the person: ");
    scanf("%d", &age);
    // Condition to check whether the person is eligible to vote or not.
    if (age >= 0 && age >= 18) {
        printf("The person is eligible to vote and is %d years old.\n", age);
    }
    else {
        printf("The person is not eligible to vote and is %d years old.\n", age);
    }
    return 0;
}
