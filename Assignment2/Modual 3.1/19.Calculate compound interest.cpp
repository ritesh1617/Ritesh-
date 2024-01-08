#include <stdio.h>
#include <math.h>

main() {
    double principal, rate, time, compoundFrequency;

    // Input principal amount, rate, time, and compound frequency
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in decimal form): ");
    scanf("%lf", &rate);

    printf("Enter time in years: ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%lf", &compoundFrequency);

    // Calculate compound interest
    double compoundInterest = principal * pow(1 + rate / compoundFrequency, compoundFrequency * time) - principal;

    // Display the result
    printf("Compound Interest: %.2lf\n", compoundInterest);

 
}

