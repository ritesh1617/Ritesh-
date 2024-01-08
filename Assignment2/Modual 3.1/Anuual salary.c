#include <stdio.h>

float calculateAnnualSalary(float monthlySalary) {
    const int monthsInYear = 12;
    return monthsInYear * monthlySalary;
}
 main() {
    float monthlySalary, annualSalary;

    printf("Enter your monthly salary: Rs : ");
    scanf("%f", &monthlySalary);

    annualSalary = calculateAnnualSalary(monthlySalary);

    printf("Your annual salary is: Rs%.2f\n", annualSalary);

 
}

