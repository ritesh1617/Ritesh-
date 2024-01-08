#include <stdio.h>

main() {
    // Declare variables
    float f, c;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    // Convert Fahrenheit to Celsius
    c = (f - 32) * 5 / 9;

    // Display the result
    printf("\n%.2f Fahrenheit is equal to %.2f Celsius\n", f, c);

    
}

