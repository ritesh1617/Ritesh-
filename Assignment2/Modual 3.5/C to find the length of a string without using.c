#include <stdio.h>

int calculateStringLength(char str[])
 {
    int length = 0;

    // Iterate through the characters until the null character is encountered
    while (str[length] != '\0') 
	{
        length++;
    }

    return length;
}

main() {
    char inputString[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Calculate and display the length of the string
    int length = calculateStringLength(inputString);
    printf("Length of the string: %d\n", length);

    
}

