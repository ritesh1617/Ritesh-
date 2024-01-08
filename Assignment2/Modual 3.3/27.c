#include <stdio.h>

int main() {
    int n,i;
    double sum = 0.0;

    // Input from user
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Calculate the sum using a loop
    for (i = 1; i <= n; ++i)
	 {
        if (i % 2 == 1)
		 {
            sum += (double)i / (i + 1);
        } 
		else 
		{
            sum -= (double)i / (i + 1);
        }
    }

    // Output the sum
    printf("Sum of the series is: %.4f\n", sum);

    
}

