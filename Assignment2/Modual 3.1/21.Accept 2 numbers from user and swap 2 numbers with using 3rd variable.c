#include <stdio.h>

main() {
    // Accept two numbers from the user
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    

    // Swap without using a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    // Display the result after swapping without a third variable
    printf("\nAfter swapping without a third variable:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    
}

