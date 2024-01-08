#include <stdio.h>

main() 
{
	
    // Declare variables
    int n,i;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Display the multiplication table of the entered number
    printf("\nMultiplication Table of %d:\n", n);
    for ( i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    
}

