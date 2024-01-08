#include <stdio.h>

main()
 {
 	
    // Declare variables
    int limit, first = 0, second = 1, next;

    // Input the limit for the Fibonacci series
    printf("Enter the limit for the Fibonacci series: ");
    scanf("%d", &limit);

    // Display the Fibonacci series up to the given limit
    printf("\nFibonacci Series up to %d:\n", limit);

    while (first <= limit)
	 {
        printf("%d, ", first);

        // Calculate the next term in the series
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

