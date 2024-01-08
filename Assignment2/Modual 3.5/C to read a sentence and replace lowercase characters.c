#include <stdio.h>

// Function to toggle the case of each character in a string
void toggleCase(char *str) {
    while (*str) {
        // Check if the current character is a lowercase letter
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A'); // Convert to uppercase
        }
        // Check if the current character is an uppercase letter
        else if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A'); // Convert to lowercase
        }

        // Move to the next character in the string
        str++;
    }
}

int main() {
    char sentence[1000];

    // Get input sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Toggle the case of characters in the sentence
    toggleCase(sentence);

    // Display the result
    printf("Modified Sentence: %s\n", sentence);

   
}

