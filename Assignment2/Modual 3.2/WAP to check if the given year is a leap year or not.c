#include <stdio.h>

main()
 {
 	
    // Declare variables
    int year;

    // Input the year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("\n%d is a leap year.\n", year);
    } else {
        printf("\n%d is not a leap year.\n", year);
    }

  
}

