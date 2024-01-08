#include <stdio.h>

// Function to count words in a string
int countWords(char *str) {
    int count = 0;
    int isWord = 0;  

    // Loop through each character in the string
    while (*str) 
	{
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            isWord = 0;
        }
        // If the current character is not a space, tab, or newline and isWord is 0, increment the word count and set isWord to 1
        else if (isWord == 0) {
            isWord = 1;
            count++;
        }

        // Move to the next character in the string
        str++;
    }

    return count;
}

main() {
    char inputString[1000];
    int wordCount;

    // Get input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Count words in the input string
     wordCount = countWords(inputString);

    // Display the result
    printf("Total number of words in the string: %d\n", wordCount);

    
}

