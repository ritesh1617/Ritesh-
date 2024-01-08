#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2, num3, largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest among three numbers
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Display the result
    printf("\nThe largest number is %d\n",  largest);

    return 0;
}

