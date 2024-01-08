#include <stdio.h>

main()
 {

    int number;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is even or odd using the ternary operator
    (number % 2 == 0) ? printf("\nThe number %d is even.\n", number) : printf("\nThe number %d is odd.\n", number);

   
}

