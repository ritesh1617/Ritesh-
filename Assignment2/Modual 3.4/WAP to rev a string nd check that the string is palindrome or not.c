#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        
        left++;
        right--;
    }
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        
        left++;
        right--;
    }
    
    return 1; // It's a palindrome
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    gets(input); // Input the string
    
    reverseString(input); // Reverse the string
    
    if (isPalindrome(input)) {
        printf("The reversed string is a palindrome.\n");
    } else {
        printf("The reversed string is not a palindrome.\n");
    }
    
    return 0;
}
