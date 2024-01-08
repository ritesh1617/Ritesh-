#include <stdio.h>

main()
 {
 	
    // Declare variables
    int number;
    unsigned long long factorial = 1;

    // Input a number
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Check for negative numbers
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a while loop
        while (number > 1) {
            factorial *= number;
            --number;
        }

        // Display the factorial
        printf("\nFactorial: %llu\n", factorial);
    }

    
}

