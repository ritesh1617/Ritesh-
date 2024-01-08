#include <stdio.h>

// Function to calculate factorial
unsigned long long calculateFactorial(int n) 
{
    unsigned long long factorial = 1;

    while (n > 1)
        factorial *= n;
        --n;
    }

    return factorial;
}

main() {
    // Declare variables
    int numbers[5],i;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for ( i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display factorials of the entered numbers
    printf("\nFactorials of the entered numbers:\n");
    for ( i = 0; i < 5; i++)
	 {
        printf("Factorial of %d: %llu\n", numbers[i], calculateFactorial(numbers[i]));
    }

   
}

