#include <stdio.h>

main()
 {
 	
    // Declare variable
    int monthNumber, daysInMonth;

    // Input month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    // Check and calculate the number of days based on the month number
    switch (monthNumber) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = 28; // Assuming a non-leap year
            break;
        default:
            printf("\nInvalid month number entered.\n");
            return 1; // Return an error code
    }

    // Display the number of days in the month
    printf("\nThe number of days in the month is: %d\n", daysInMonth);

    
}

