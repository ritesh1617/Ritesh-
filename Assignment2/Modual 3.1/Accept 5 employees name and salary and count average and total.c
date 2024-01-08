#include <stdio.h>

main()
 {
    // Declare variables
    int i;
    char names[5][50];
    float salaries[5];
    float totalSalary = 0, averageSalary;

    // Input employee names and salaries
    for ( i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);  
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        
        // Add salary to total
        totalSalary += salaries[i];
    }

    // Calculate average salary
    averageSalary = totalSalary / 5;

    // Display results
    printf("\nEmployee details:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d: %s, Salary: %.2f\n", i + 1, names[i], salaries[i]);
    }

    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);

}

