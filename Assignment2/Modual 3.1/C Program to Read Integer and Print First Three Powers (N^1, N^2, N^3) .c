#include <stdio.h>

main() 
{
    // Declare variables
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Print the first three powers
    printf("\nFirst three powers of %d:\n", num);
    printf("%d^1 = %d\n", num, num);
    printf("%d^2 = %d\n", num, num * num);
    printf("%d^3 = %d\n", num, num * num * num);

    
}

