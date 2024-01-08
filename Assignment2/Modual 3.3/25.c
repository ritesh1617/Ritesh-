#include <stdio.h>

int main() {
    int n, sum = 0,i;

    // Input from user
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Calculate the sum using a loop
    for ( i = 1; i <= n; ++i) {
        sum += i * i;
    }

    // Output the sum
    printf("Sum of the series (1^2) + (2^2) + (3^2) + ... + (%d^2) is: %d\n", n, sum);

    
}

