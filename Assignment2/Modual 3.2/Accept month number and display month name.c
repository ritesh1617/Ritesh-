#include <stdio.h>

main()
 {
 	
    // Declare variable
    int monthNumber;

    // Input month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    // Check and display the month name based on the month number
    switch (monthNumber) {
        case 1:
            printf("\nThe month is January.\n");
            break;
        case 2:
            printf("\nThe month is February.\n");
            break;
        case 3:
            printf("\nThe month is March.\n");
            break;
        case 4:
            printf("\nThe month is April.\n");
            break;
        case 5:
            printf("\nThe month is May.\n");
            break;
        case 6:
            printf("\nThe month is June.\n");
            break;
        case 7:
            printf("\nThe month is July.\n");
            break;
        case 8:
            printf("\nThe month is August.\n");
            break;
        case 9:
            printf("\nThe month is September.\n");
            break;
        case 10:
            printf("\nThe month is October.\n");
            break;
        case 11:
            printf("\nThe month is November.\n");
            break;
        case 12:
            printf("\nThe month is December.\n");
            break;
        default:
            printf("\nInvalid month number entered.\n");
    }

   
}

