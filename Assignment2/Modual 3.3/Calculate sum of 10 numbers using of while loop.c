#include <stdio.h>

main()
 {
    // Declare variables
    int i = 1, n = 10, number, sum = 0;

    // Input 10 numbers from the user and calculate their sum
    while (i <= n) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        sum += number;
        i++;
    }

    // Display the sum
    printf("\nSum of the entered numbers: %d\n", sum);

    
}

