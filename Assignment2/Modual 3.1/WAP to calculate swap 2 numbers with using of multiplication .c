#include <stdio.h>

main() 
{
    // Declare variables
    float num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Swap using multiplication and division
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    // Display the swapped numbers
    printf("\nAfter swapping:\n");
    printf("First number: %.2f\n", num1);
    printf("Second number: %.2f\n", num2);

}

