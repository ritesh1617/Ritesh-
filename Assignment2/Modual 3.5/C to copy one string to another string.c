#include <stdio.h>

// Function to copy one string to another
void copyString(char *destination, const char *source) {
    while (*source) {
        *destination = *source;
        source++;
        destination++;
    }

    // Null-terminate the destination string
    *destination = '\0';
}

main() {
    char sourceString[1000], destinationString[1000];

    // Get input string from the user
    printf("Enter a string to copy: ");
    fgets(sourceString, sizeof(sourceString), stdin);

    // Copy the string
    copyString(destinationString, sourceString);

    // Display the copied string
    printf("Original String: %s", sourceString);
    printf("Copied String  : %s", destinationString);

    
}

