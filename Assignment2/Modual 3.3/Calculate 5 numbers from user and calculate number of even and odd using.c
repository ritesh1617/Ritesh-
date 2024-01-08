#include <stdio.h>

main() 
{
	
    // Declare variables
    int i = 1, number, evenCount = 0, oddCount = 0;

    // Input 5 numbers from the user and calculate the number of even and odd numbers
    while (i <= 5) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        // Check if the number is even or odd
        if (number % 2 == 0)
		 {
            evenCount++;
        } else {
            oddCount++;
        }

        i++;
    }

    // Display the results
    printf("\nResults:\n");
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    
}

