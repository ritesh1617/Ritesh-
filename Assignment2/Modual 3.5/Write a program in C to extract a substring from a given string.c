#include <stdio.h>
#include <string.h>

// Function to extract a substring from a given string
void extractSubstring(char *source, int start, int length, char *destination) {
    int i, j;

    // Copy characters from the source string to the destination string
    for (i = start, j = 0; i < start + length && source[i] != '\0'; i++, j++) {
        destination[j] = source[i];
    }

    // Null-terminate the destination string
    destination[j] = '\0';
}

int main() {
    char inputString[1000], substring[1000];
    int start, length;

    // Get input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Get starting index and length of the substring from the user
    printf("Enter the starting index of the substring: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    // Extract the substring
    extractSubstring(inputString, start, length, substring);

    // Display the extracted substring
    printf("Substring: %s\n", substring);

    
}

