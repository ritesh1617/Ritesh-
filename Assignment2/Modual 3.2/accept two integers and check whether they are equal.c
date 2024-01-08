#include <stdio.h>

main()
 {
 	
    // Declare variables
    int n1, n2;

    // Input two integers
    printf("Enter the first Number: ");
    scanf("%d", &n1);

    printf("Enter the second Number: ");
    scanf("%d", &n2);

    // Check if the numbers are equal
    if (n1 == n2) {
        printf("\nThe two integers %d and %d are equal.\n", n1, n2);
    } else {
        printf("\nThe two integers %d and %d are not equal.\n", n1, n2);
    }

    
}

