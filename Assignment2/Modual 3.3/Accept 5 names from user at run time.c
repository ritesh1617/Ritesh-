#include <stdio.h>

main() 
{
	
    // Declare an array to store 5 names
    char names[5][50];
    int i;

    // Input 5 names from the user
    printf("Enter 5 names:\n");
    for ( i = 0; i < 5; i++) 
	{
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Display the entered names
    printf("\nEntered names are:\n");
    for ( i = 0; i < 5; i++) 
	{
        printf("%s\n", names[i]);
    }

    
}

