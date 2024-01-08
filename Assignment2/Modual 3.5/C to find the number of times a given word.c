#include <stdio.h>
#include <string.h>

// Function to find the number of occurrences of a word in a string
int countWordOccurrences(char *str, const char *word) {
    int count = 0;
    int wordLength = strlen(word);

    // Loop through the string
    while (*str) {
        // Check if the current substring matches the word
        if (strncmp(str, word, wordLength) == 0) {
            count++;
            // Move the pointer to the end of the word to avoid counting overlapping occurrences
            str += wordLength;
        } else {
            // Move to the next character in the string
            str++;
        }
    }

    return count;
}

int main() {
    char inputString[1000];
    const char wordToFind[] = "is";

    // Get input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Find the number of occurrences of the word 'is'
    int occurrences = countWordOccurrences(inputString, wordToFind);

    // Display the result
    printf("Number of occurrences of '%s': %d\n", wordToFind, occurrences);

    
}

