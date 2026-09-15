// A program to print the bio data of the user.
#include <stdio.h>
int main() {
    // Declaring variables to store user input.
    char name[20];
    int age;
    char fname[20];
    char dep[20];
    char city[20];
    // Taking input from the user.
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your father's name: ");
    scanf("%s", fname);
    printf("Enter your department: ");
    scanf("%s", dep);
    printf("Enter your city: ");
    scanf("%s", city);
    // Displaying the bio data.
    printf("********\n");
    printf("My name is %s\n", name);
    printf("I am %d years old\n", age);
    printf("My father's name is %s\n", fname);
    printf("My department is %s\n", dep);
    printf("I was born and raised in %s\n", city);
    printf("********\n");
    // Returning 0 to indicate successful execution.
    return 0;
}