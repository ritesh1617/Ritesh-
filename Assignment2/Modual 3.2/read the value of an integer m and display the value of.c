#include <stdio.h>

main()
 {
    // Declare variables
    int m, n;

    // Input an integer
    printf("Enter the value of m: ");
    scanf("%d", &m);

    // Determine the value of n based on the conditions
    if (m > 0) {
        n = 1;
    } else if (m == 0) {
        n = 0;
    } else {
        n = -1;
    }

    // Display the result
    printf("\nThe value of n is: %d\n", n);

    
}

