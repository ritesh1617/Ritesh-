#include <stdio.h>

main()
 {
 	
    // Declare an array to store 5 numbers
    int numbers[5],i;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for ( i = 0; i < 5; i++)
	 {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the entered numbers
    printf("\nEntered numbers are: ");
    for ( i = 0; i < 5; i++)
	 {
        printf("%d ", numbers[i]);
    }

   
}

