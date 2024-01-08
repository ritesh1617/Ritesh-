#include <stdio.h>
#include <math.h>

main()
 {
 	
    // Declare variables
    int number, originalNumber, remainder, n = 0, result = 0;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Store the original number in another variable
    originalNumber = number;

    // Count the number of digits
    for (n = 0; originalNumber != 0; ++n) {
        originalNumber /= 10;
    }

    // Reset originalNumber to the original value
    originalNumber = number;

    // Calculate the result
    for (; originalNumber != 0; originalNumber /= 10) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
    }

    // Check if the number is an Armstrong number
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    
}

