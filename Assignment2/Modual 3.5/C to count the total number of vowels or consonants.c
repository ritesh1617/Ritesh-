#include <stdio.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch);  // Convert to lowercase to handle both uppercase and lowercase vowels

    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to count vowels and consonants in a string
void countVowelsConsonants(char *str, int *vowels, int *consonants) {
    while (*str) {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
            if (isVowel(*str)) {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        str++;
    }
}

int main() {
    char inputString[1000];
    int vowels = 0, consonants = 0;

    // Get input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Count vowels and consonants in the input string
    countVowelsConsonants(inputString, &vowels, &consonants);

    // Display the result
    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}

