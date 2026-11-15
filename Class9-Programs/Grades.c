// A program to display the grades awarded.
#include <stdio.h>
int main() {
    char name[20];
    double phy, chem, bio;

    // Taking input from the user.
    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter the marks in physics: ");
    if(scanf("%lf", &phy) != 1 || phy < 0 || phy > 100) {
        printf("Invalid Input! Marks must be between 0 and 100.\n");
        return 1;
    }

    printf("Enter the marks in chemistry: ");
    if(scanf("%lf", &chem) != 1 || chem < 0 || chem > 100) {
        printf("Invalid Input! Marks must be between 0 and 100.\n");
        return 1;
    }

    printf("Enter the marks in biology: ");
    if(scanf("%lf", &bio) != 1 || bio < 0 || bio > 100) {
        printf("Invalid Input! Marks must be between 0 and 100.\n");
        return 1;
    }

    // Calculation.
    double avg = (bio + chem + phy) / 3.0;

    // Printing the details of the student.
    printf("***************************\n");
    printf("Details of the student: \n");
    printf("Name = %s", name);
    printf("Average = %.2f\n", avg);

    // Determining the grade based on the average marks.
    if (avg >= 80) {
        printf("Grade = Distinction\n");
    }
    if (avg >= 60 && avg < 80) {
        printf("Grade = First Division.\n");
    }
    if (avg >= 45 && avg < 60) {
        printf("Grade = Second Division.\n");
    }
    if (avg >= 40 && avg < 45) {
        printf("Grade = Pass\n");
    }
    if (avg < 40) {
        printf("Promotion not granted.\n");
    }

    printf("***************************\n");

    return 0;
}