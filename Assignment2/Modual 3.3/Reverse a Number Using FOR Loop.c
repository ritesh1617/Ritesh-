#include <stdio.h>

main()
 {
    int num, reversedNum = 0;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reversing the number using a for loop
    for (; num != 0; num /= 10) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
    }

    // Output the reversed number
    printf("Reversed Number: %d\n", reversedNum);

    
}

