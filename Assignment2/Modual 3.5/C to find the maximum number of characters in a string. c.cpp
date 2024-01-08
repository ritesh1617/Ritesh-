#include <stdio.h>

// Function to find the maximum number of consecutive characters in a string
int maxConsecutiveCharacters(char *str) {
    int maxCount = 0;
    int currentCount = 1;

    while (*str) {
        // Check if the current character is the same as the next one
        if (*str == *(str + 1)) {
            currentCount++;
        } else {
            // Update maxCount if the current consecutive count is greater
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
            // Reset current count for the next character
            currentCount = 1;
        }

        // Move to the next character in the string
        str++;
    }

    return maxCount;
}

main() {
    char inputString[1000];

    // Get input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Find the maximum number of consecutive characters
    int maxCount = maxConsecutiveCharacters(inputString);

    // Display the result
    printf("Maximum number of consecutive characters: %d\n", maxCount);

    
}

