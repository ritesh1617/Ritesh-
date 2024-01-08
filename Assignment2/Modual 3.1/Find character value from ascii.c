#include <stdio.h>

 main() {
    int asciiCode;

    printf("Enter an ASCII code: ");
    scanf("%d", &asciiCode);

    char characterValue = (char)asciiCode;

    printf("Character value for ASCII code %d is: %c\n", asciiCode, characterValue);

}

