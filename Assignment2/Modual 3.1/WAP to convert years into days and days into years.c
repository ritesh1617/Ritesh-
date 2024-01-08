#include <stdio.h>

main()
 {
    // Declare variables
    int years, days;

    // Input the number of years
    printf("Enter the number of years: ");
    scanf("%d", &years);

    // Convert years to days
    days = years * 365 + (int)(years / 4); // accounting for leap years

    // Display the result
    printf("\n%d years is equal to %d days\n", years, days);

    // Input the number of days
    printf("\nEnter the number of days: ");
    scanf("%d", &days);

    // Convert days to years
    years = days / 365;

    // Display the result
    printf("\n%d days is equal to %d years\n", days, years);

    
}

