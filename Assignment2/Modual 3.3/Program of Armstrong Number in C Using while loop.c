#include <stdio.h>
#include <math.h>

int main()
 {
    // Declare variables
    int number, originalNumber, remainder, n = 0, result = 0;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Store the original number in another variable
    originalNumber = number;

    // Count the number of digits
    while (originalNumber != 0)
	 {
        originalNumber /= 10;
        ++n;
    }

    // Reset originalNumber to the original value
    originalNumber = number;

    // Calculate the result
    while (originalNumber != 0)
	 {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

   
}

