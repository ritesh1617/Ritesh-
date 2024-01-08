#include <stdio.h>

main()
 {
 	
    // Declare variables
    int n, i = 1, sum = 0;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is valid
    if (n <= 0) 
	{
        printf("Please enter a positive integer.\n");
    } 
	else
	 {
        // Calculate the sum of natural numbers up to n
        while (i <= n) 
		{
            sum += i;
            i++;
        }

        // Display the sum
        printf("\nSum of natural numbers up to %d: %d\n", n, sum);
    }

    
}

