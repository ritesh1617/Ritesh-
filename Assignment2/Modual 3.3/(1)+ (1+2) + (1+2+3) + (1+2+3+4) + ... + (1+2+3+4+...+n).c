#include <stdio.h>

int main() {
    int n, sum = 0,i,j;

    // Input from user
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Calculate the sum using nested loops
    for (i = 1; i <= n; ++i) {
        int innerSum = 0;
        for ( j = 1; j <= i; ++j) {
            innerSum += j;
        }
        sum += innerSum;
    }

    // Output the sum
    printf("Sum of the series (1) + (1+2) + (1+2+3) + ... + (1+2+3+...+n) is: %d\n", sum);

   
}

