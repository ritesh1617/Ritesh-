#include <stdio.h>

main()
{
    // Declare variables
    float kilometers, meters;

    // Input the number of kilometers
    printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometers);

    // Convert kilometers to meters
    meters = kilometers * 1000;

    // Display the result
    printf("\n%.2f kilometers is equal to %.2f meters\n", kilometers, meters);

    
}

