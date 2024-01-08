#include <stdio.h>

// Function to count alphabets, digits, and special characters in a string
void countCharacters(char *str, int *alphabets, int *digits, int *specialChars) {
    while (*str) {
        // Check if the current character is an alphabet
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
            (*alphabets)++;
        }
        // Check if the current character is a digit
        else if (*str >= '0' && *str <= '9') {
            (*digits)++;
        }
        // If the character is neither alphabet nor digit, consider it as a special character
        else 
		{
            (*specialChars)++;
        }

        // Move to the next character in the string
        str++;
    }
}

int main() {
    char inputString[1000];
    int alphabets = 0, digits = 0, specialChars = 0;

    // Get input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Count alphabets, digits, and special characters in the input string
    countCharacters(inputString, &alphabets, &digits, &specialChars);

    // Display the result
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", specialChars);

    
}

