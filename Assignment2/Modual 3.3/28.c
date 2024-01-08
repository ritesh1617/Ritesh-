#include <stdio.h>

int main() {
    int n,i,term=1;

    // Input from user
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Generate and print the series
    
    for ( i = 1; i <= n; ++i)
	 {
        printf("%d ", term);
        term *= 3;  // Multiply the previous term by 3 to get the next term
    }

    printf("\n");

    
}

