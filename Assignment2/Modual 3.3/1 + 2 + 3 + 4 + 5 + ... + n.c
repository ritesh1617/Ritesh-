#include <stdio.h>

main() {
    int n, sum = 0,i;

    // Input from user
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Calculate the sum using a loop
    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    // Output the sum
    printf("Sum of the series 1 + 2 + 3 + ... + %d is: %d\n", n, sum);

   
}

