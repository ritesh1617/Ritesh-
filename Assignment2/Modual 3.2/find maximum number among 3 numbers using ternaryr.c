#include <stdio.h>

 main()
  {
    // Declare variables
    int n1, n2, n3, max;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Find the maximum using the ternary operator
    max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);

    // Display the result
    printf("\nThe maximum number among %d, %d, and %d is: %d\n", n1, n2, n3, max);

}

