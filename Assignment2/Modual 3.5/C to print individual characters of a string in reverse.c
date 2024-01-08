#include <stdio.h>

main()
 {
    char inputString[100];
    int i;

    // Input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Find the length of the string
    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }

    // Display individual characters from the string in reverse order
    printf("Individual characters from the string in reverse order:\n");
    for (i = length - 1; i >= 0; i--) 
	{
        printf("%c\n", inputString[i]);
    }

    
}

