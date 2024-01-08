#include <stdio.h>

 main() 
 {
    // Declare variable
    int marks;

    // Input marks
    printf("Enter the marks (out of 100): ");
    scanf("%d", &marks);

    // Check if the student has passed or failed using conditional statements
    if (marks >= 40) {
        printf("\nCongratulations! You have passed with %d marks.\n", marks);
    } else {
        printf("\nSorry! You have failed with %d marks. Please try again.\n", marks);
    }

   
}

