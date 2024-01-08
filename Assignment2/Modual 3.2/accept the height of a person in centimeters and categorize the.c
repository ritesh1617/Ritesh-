#include <stdio.h>

main() {
    // Declare variable
    float height;

    // Input height in centimeters
    printf("Enter the height in centimeters: ");
    scanf("%f", &height);

    // Categorize the person based on height using conditional statements
    if (height < 150) {
        printf("\nThe person is Short.\n");
    } else if (height >= 150 && height < 170) {
        printf("\nThe person is of Average height.\n");
    } else {
        printf("\nThe person is Tall.\n");
    }

  
}

