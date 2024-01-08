#include <stdio.h>

main()
 {
    // Declare variables
    int number, sum = 0, digit;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the summation of digits in the number
    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    // Display the summation
    printf("\nSummation of the digits: %d\n", sum);

   
}

