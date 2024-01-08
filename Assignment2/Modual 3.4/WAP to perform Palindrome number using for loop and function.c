#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0, remainder;

    // Reverse the number
    for (; number != 0; number /= 10) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    // Check if the original number is equal to its reverse
    return (originalNumber == reversedNumber);
}

int main() {
    int num;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

