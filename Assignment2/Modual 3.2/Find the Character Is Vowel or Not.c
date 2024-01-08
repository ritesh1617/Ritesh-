#include <stdio.h>

main() 
{
	
    // Declare variable
    char character;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &character);  // Note the space before %c to consume any leading whitespace

    // Check if the character is a vowel using conditional statements
    if ((character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') ||
        (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')) {
        printf("\nThe character %c is a vowel.\n", character);
    } else {
        printf("\nThe character %c is not a vowel.\n", character);
    }

   
}

