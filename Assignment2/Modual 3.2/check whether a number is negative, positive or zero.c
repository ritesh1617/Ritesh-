#include <stdio.h>

main()
 {
    // Declare variable
    int number;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is negative, positive, or zero using conditional statements
    if (number > 0) {
        printf("\nThe number %d is positive.\n", number);
    } else if (number < 0) {
        printf("\nThe number %d is negative.\n", number);
    } else {
        printf("\nThe number is zero.\n");
    }


}

