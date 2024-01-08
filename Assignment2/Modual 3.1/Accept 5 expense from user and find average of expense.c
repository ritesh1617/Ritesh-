#include <stdio.h>

main()
 {
    // Declare variables
    int i;
    float expenses[5];
    float totalExpense = 0, averageExpense;

    // Input expenses
    for ( i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expenses[i]);

        // Add expense to total
        totalExpense += expenses[i];
    }

    // Calculate average expense
    averageExpense = totalExpense / 5;

    // Display results
    printf("\nExpense details:\n");
    for ( i = 0; i < 5; i++) {
        printf("Expense %d: %.2f\n", i + 1, expenses[i]);
    }

    printf("\nTotal Expense: %.2f\n", totalExpense);
    printf("Average Expense: %.2f\n", averageExpense);

  
}

