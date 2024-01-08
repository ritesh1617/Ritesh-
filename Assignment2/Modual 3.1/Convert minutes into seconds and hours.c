#include <stdio.h>

main()
 {
    // Declare variables
    int minutes;
    int seconds, hours;

    // Input the number of minutes
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    // Convert minutes to seconds and hours
    seconds = minutes * 60;
    hours = minutes / 60;

    // Display the result
    printf("\n%d minutes is equal to %d seconds and %d hours\n", minutes, seconds, hours);

}

