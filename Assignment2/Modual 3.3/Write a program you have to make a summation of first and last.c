#include <stdio.h>

main()
 {
    // Declare variables
    int number, firstDigit, lastDigit, sum;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Find the first digit
    firstDigit = number;
    while (firstDigit >= 10) 
	{
        firstDigit /= 10;
    }

    // Find the last digit
    lastDigit = number % 10;

    // Calculate the summation of the first and last digits
    sum = firstDigit + lastDigit;

    // Display the summation
    printf("\nSummation of the first and last digits: %d\n", sum);

   
}

