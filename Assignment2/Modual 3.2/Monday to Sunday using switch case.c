#include <stdio.h>

main()
 {
 	
    // Declare variable
    int dayNumber;

    // Input day number (1-7)
    printf("Enter the day number (1-7): ");
    scanf("%d", &dayNumber);

    // Display the day using switch case
    switch (dayNumber) 
	{
        case 1:
            printf("\nMonday\n");
            break;
        case 2:
            printf("\nTuesday\n");
            break;
        case 3:
            printf("\nWednesday\n");
            break;
        case 4:
            printf("\nThursday\n");
            break;
        case 5:
            printf("\nFriday\n");
            break;
        case 6:
            printf("\nSaturday\n");
            break;
        case 7:
            printf("\nSunday\n");
            break;
        default:
            printf("\nInvalid day number entered.\n");
    }

    
}

