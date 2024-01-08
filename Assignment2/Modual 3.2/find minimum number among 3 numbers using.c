#include <stdio.h>

main()
 {
 	
    // Declare variables
    int num1, num2, num3, min;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the minimum using the ternary operator
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // Display the result
    printf("\nThe minimum number among is: %d\n",  min);

    
}

