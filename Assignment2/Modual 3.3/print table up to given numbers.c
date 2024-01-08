#include <stdio.h>

main() 
{
    // Declare variables
    int number,i;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display the multiplication table up to the given number
    printf("\nMultiplication Table for %d:\n", number);
    for ( i = 1; i <= 10; i++)
	{
        printf("%d x %d = %d\n", number, i, number * i);
    }

    
}

