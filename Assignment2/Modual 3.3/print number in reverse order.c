#include <stdio.h>

main()
 {
 	
    // Declare variables
    int number, reverse = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) 
	{
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    // Display the reverse of the number
    printf("\nReverse of the number: %d\n", reverse);

    
}

