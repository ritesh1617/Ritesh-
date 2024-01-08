#include <stdio.h>

main()
 {
 	
    // Declare variable
    int month;

    // Input month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Check and display the number of days based on the month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("\nThe month has 31 days.\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("\nThe month has 30 days.\n");
            break;
        case 2:
            printf("\nThe month has 28 days.\n");
            break;
        default:
            printf("\nInvalid month number entered.\n");
    }

    
}

