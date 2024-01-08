#include <stdio.h>

main()
{
    // Declare variable
    char character;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Check the type of character using conditional statements
    if (character >= 'A' && character <= 'Z') 
	{
        printf("\nThe character %c is an Uppercase letter.\n", character);
    } else if (character >= 'a' && character <= 'z')
	 {
        printf("\nThe character %c is a Lowercase letter.\n", character);
    } else if (character >= '0' && character <= '9') 
	{
        printf("\nThe character %c is a Digit.\n", character);
    } else {
        printf("\nThe character %c is a Special Character.\n", character);
    }

}

