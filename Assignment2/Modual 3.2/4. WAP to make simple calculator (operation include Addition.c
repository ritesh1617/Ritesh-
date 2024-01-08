#include <stdio.h>

 main() {
    // Declare variables
    float num1, num2, result;
    char operator;

    // Input two numbers and the operation
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the operation (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform the calculation based on the operator using conditional statements
    if (operator == '+') 
	{
        result = num1 + num2;
        printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
    } else if (operator == '-')
	 {
        result = num1 - num2;
        printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
    } else if (operator == '*') 
	{
        result = num1 * num2;
        printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);
    } else if (operator == '/')
	 {
        if (num2 != 0)
		 {
            result = num1 / num2;
            printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
        } else
		 {
            printf("\nError: Division by zero is undefined.\n");
        }
    } 
	else if (operator == '%')
	 {
        if (num2 != 0) {
            result = (int)num1 % (int)num2; // Modulo operation for integers
            printf("\n%.2f %% %.2f = %.2f\n", num1, num2, result);
        }
		 else 
		 {
            printf("\nError: Modulo by zero is undefined.\n");
        }
    }
	 else
	  {
        printf("\nError: Invalid operator entered.\n");
    }

    
}

