#include <stdio.h>

main()
 {
    // Declare variables
    int number, maxDigit = 0, digit;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Find the maximum digit in the number
    while (number != 0)
	 {
        digit = number % 10;

        // Update maxDigit if the current digit is greater
        if (digit > maxDigit) 
		{
            maxDigit = digit;
        }

        number /= 10;
    }

    // Display the maximum digit
    printf("\nMaximum digit in the number: %d\n", maxDigit);

    
}

