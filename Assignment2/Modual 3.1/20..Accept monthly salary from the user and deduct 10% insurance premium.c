#include <stdio.h>

main() {
    // Step 1: Accept monthly salary from the user
    float monthly_salary;
    printf("Enter your monthly salary: ");
    scanf("%f", &monthly_salary);

    // Step 2: Calculate insurance premium (10%)
    float insurance_premium = 0.10 * monthly_salary;

    // Step 3: Calculate remaining salary after deducting insurance premium
    float remaining_after_insurance = monthly_salary - insurance_premium;

    // Step 4: Calculate loan installment (10%)
    float loan_installment = 0.10 * remaining_after_insurance;

    // Step 5: Calculate remaining salary after deducting loan installment
    float remaining_salary = remaining_after_insurance - loan_installment;

    // Step 6: Display the results
    printf("Original Salary: Rs%.2f\n", monthly_salary);
    printf("Insurance Premium (10%%): Rs%.2f\n", insurance_premium);
    printf("Loan Installment (10%%): Rs%.2f\n", loan_installment);
    printf("Remaining Salary: Rs%.2f\n", remaining_salary);

}

