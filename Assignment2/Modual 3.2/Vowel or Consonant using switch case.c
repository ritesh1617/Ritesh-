#include <stdio.h>

main() 
{
	
    // Declare variable
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any whitespace characters

    // Convert to lowercase for case-insensitive comparison
    ch = tolower(ch);

    // Check if the character is a vowel or consonant using switch case
    switch (ch) 
	{
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\n%c is a vowel.\n", ch);
            break;
        default:
            printf("\n%c is a consonant.\n", ch);
    }

    
}

