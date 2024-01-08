#include <stdio.h>

#define ROWS 5
#define COLS 10

main() {
    int counter = 1,i,j;

    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            printf("%02d ", counter++);
        }
        printf("\n");
    }
return 0;
}

