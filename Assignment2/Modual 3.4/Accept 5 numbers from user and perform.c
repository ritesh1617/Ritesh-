#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0,i;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for ( i = 0; i < 5; i++)
	 {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Add the entered number to the sum
        sum += numbers[i];
    }

    // Display the entered numbers
    printf("\nEntered Numbers:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", numbers[i]);
    }

    // Display the sum of the array
    printf("\n\nSum of the Array: %d\n", sum);

    
}

