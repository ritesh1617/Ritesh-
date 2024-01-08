#include <stdio.h>

 main() 
 {
    int years, months, days;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    months = years * 12;
    days = years * 365 + (int)(years / 4); // accounting for leap years

    printf("\n%d years is equal to %d months and %d days\n", years, months, days);

    
}

