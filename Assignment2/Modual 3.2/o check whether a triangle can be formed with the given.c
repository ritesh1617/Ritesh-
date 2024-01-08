#include <stdio.h>

main() 
{
	
    // Declare variables
    int a1, a2, a3;

    // Input the three angles
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &a1, &a2, &a3);

    // Check whether a triangle can be formed
    if (a1 + a2 + a3 == 180)
	 {
        printf("\nA triangle can be formed with the given angles.\n");
    } 
	else 
	{
        printf("\nA triangle cannot be formed with the given angles.\n");
    }

    
}

