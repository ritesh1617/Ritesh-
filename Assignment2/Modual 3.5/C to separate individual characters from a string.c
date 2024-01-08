#include <stdio.h>

 main()
 {
    char inputString[100];
    int i;

    // Input string from the user
    printf("Enter a string: ");
    
    fgets(inputString, sizeof(inputString), stdin);

    // Display individual characters from the string
    printf("Individual characters from the string:\n");
    for (i = 0; inputString[i] != '\0'; i++) 
	{
        printf("%c\n", inputString[i]);
    }

    
}

