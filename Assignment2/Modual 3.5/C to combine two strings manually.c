#include <stdio.h>

// Function to combine two strings manually
void combineStrings(char *str1, char *str2, char *result) {
    int i, j;

    // Copy the first string to the result string
    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    // Concatenate the second string to the result string
    for (j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }

    // Null-terminate the result string
    result[i + j] = '\0';
}

int main() {
    char string1[1000], string2[1000], resultString[2000];

    // Get the first string from the user
    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);

    // Get the second string from the user
    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);

    // Combine the two strings
    combineStrings(string1, string2, resultString);

    // Display the result
    printf("Combined String: %s", resultString);

    
}

