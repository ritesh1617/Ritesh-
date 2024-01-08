#include <stdio.h>

// Function to remove characters from a string except alphabets
void removeNonAlphabets(char *str)
 {
    int i, j;

    for (i = 0, j = 0; str[i] != '\0'; i++)
	 {
        // Check if the current character is an alphabet
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // Keep the alphabet in the string
            str[j++] = str[i];
        }
    }

    // Null-terminate the modified string
    str[j] = '\0';
}

int main() {
    char inputString[1000];

    // Get input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove non-alphabetic characters from the string
    removeNonAlphabets(inputString);

    // Display the result
    printf("String after removing non-alphabetic characters: %s\n", inputString);

   
}

