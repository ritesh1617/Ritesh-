#include <stdio.h>

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Loop through each character of both strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        // If characters are not equal, return the difference
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }

    // If one string is shorter than the other, return the difference in lengths
    return str1[i] - str2[i];
}

main()
 {
    char str1[100], str2[100];

    // Get input strings from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare strings and display the result
    int result = compareStrings(str1, str2);

    if (result == 0)
	 {
        printf("Both strings are equal.\n");
    } else if (result < 0) 
	{
        printf("The first string is lexicographically smaller than the second string.\n");
    } else
	 {
        printf("The first string is lexicographically larger than the second string.\n");
    }

    
}

