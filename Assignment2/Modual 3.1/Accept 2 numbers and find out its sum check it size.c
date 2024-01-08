#include <stdio.h>

main()
{
    // Declare variables
    int num1, num2, sum;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the sum
    printf("\nThe sum of %d and %d is: %d\n", num1, num2, sum);

    // Check the size of the sum
    printf("Size of the sum : %lu\n", sizeof(sum));

   
}

