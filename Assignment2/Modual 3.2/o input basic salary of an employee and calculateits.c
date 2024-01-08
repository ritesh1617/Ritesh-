#include <stdio.h>

main() 
{
	
    // Declare variables
    float basicSalary, grossSalary, hra, da;

    // Input basic salary
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on conditions
    if (basicSalary <= 10000) {
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    } else {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;

    // Display the gross salary
    printf("\nBasic Salary: %.2f\n", basicSalary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", grossSalary);

    
}

