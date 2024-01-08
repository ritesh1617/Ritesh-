#include <stdio.h>

main()
 {
    // Declare variables
    int days;
    double months;

    // Input the number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Convert days to months (assuming an average of 30.44 days in a month)
    months = days / 30;

    // Display the result
    printf("\n%d days is approximately equal to %.2f months\n", days, months);

   
}

