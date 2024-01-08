#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return (original == reverse);
}

 main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (isPalindrome(num1)) {
        printf("%d is a palindrome.\n", num1);
    } else {
        printf("%d is not a palindrome.\n", num1);
    }

    if (isPalindrome(num2)) {
        printf("%d is a palindrome.\n", num2);
    } else {
        printf("%d is not a palindrome.\n", num2);
    }

    if (isPalindrome(num3)) {
        printf("%d is a palindrome.\n", num3);
    } else {
        printf("%d is not a palindrome.\n", num3);
    }

   
}

