#include <stdio.h>

 main() 
 {
 	
    // Declare variable
    int weekNumber;

    // Input week number
    printf("Enter the week number (1-7): ");
    scanf("%d", &weekNumber);

    // Check and display the week day based on the week number
    switch (weekNumber) {
        case 1:
            printf("\nThe day is Sunday.\n");
            break;
        case 2:
            printf("\nThe day is Monday.\n");
            break;
        case 3:
            printf("\nThe day is Tuesday.\n");
            break;
        case 4:
            printf("\nThe day is Wednesday.\n");
            break;
        case 5:
            printf("\nThe day is Thursday.\n");
            break;
        case 6:
            printf("\nThe day is Friday.\n");
            break;
        case 7:
            printf("\nThe day is Saturday.\n");
            break;
        default:
            printf("\nInvalid week number entered.\n");
    }

   
}

