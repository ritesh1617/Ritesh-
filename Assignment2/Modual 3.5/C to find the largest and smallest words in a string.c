#include <stdio.h>
#include <string.h>

// Function to find the largest and smallest words in a string
void findLargestSmallestWords(char *str, char *largestWord, char *smallestWord) {
    char currentWord[1000];
    int i = 0, j = 0;

    while (str[i] != '\0') {
        // If the current character is a space or newline, consider it as the end of the word
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0') {
            currentWord[j] = '\0';

            // Compare the current word with the largest and smallest words found so far
            if (strlen(currentWord) > strlen(largestWord)) {
                strcpy(largestWord, currentWord);
            }

            if (strlen(currentWord) < strlen(smallestWord) || strlen(smallestWord) == 0) {
                strcpy(smallestWord, currentWord);
            }

            // Reset the index for the next word
            j = 0;
        } else {
            // Add the current character to the current word
            currentWord[j++] = str[i];
        }

        i++;
    }
}

int main() {
    char inputString[1000], largestWord[1000], smallestWord[1000];

    // Get input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Initialize largest and smallest words
    largestWord[0] = '\0';
    smallestWord[0] = '\0';

    // Find the largest and smallest words
    findLargestSmallestWords(inputString, largestWord, smallestWord);

    // Display the result
    printf("Largest Word: %s\n", largestWord);
    printf("Smallest Word: %s\n", smallestWord);

    
}

