// A program to calculate GST.
#include <stdio.h>
int main()
{
    // Declaring variables.
    float article;
    float gstRate;
    float gst;
    float totalamt;
    // Prompting the user to enter the values.
    printf("Enter the amount of the article: ");
    scanf("%f", &article);
    printf("Enter the rate of GST: ");
    scanf("%f", &gstRate);
    // Calculating GST and total amount.
    gst = article * (gstRate / 100.0);
    totalamt = article + gst;
    // Print the result.
    printf("The amount of the article = %.3f\n", article);
    printf("Rate of GST = %.3f\n", gstRate);
    printf("GST = %.3f\n", gst);
    printf("Total amount paid by the customer = %.3f\n", totalamt);
    // Returns 0 to indicate successful execution.
    return 0;
}