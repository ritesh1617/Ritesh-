#include <stdio.h>

main() {
    int numbers[5],i;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for ( i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the numbers in reverse order
    printf("\nNumbers in reverse order:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }

    
}

