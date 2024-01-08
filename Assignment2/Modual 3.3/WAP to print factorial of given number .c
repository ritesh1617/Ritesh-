#include <stdio.h>

main() 
{
	
    // Declare variables
    int number,i;
    unsigned long long factorial = 1;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for negative numbers
    if (number < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } else
	{
        // Calculate factorial
        for ( i = 1; i <= number; i++)
		 {
            factorial *= i;
        }

        // Display the factorial
        printf("\nFactorial of %d is: %llu\n", number, factorial);
    }

    
}

