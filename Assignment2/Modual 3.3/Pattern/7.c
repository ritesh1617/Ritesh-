#include <stdio.h>

#define SIZE 10
 main() {
    int matrix[SIZE][SIZE],i,j;

    // Fill the matrix with values from 1 to 100
    int value = 1;
    for ( i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matrix[i][j] = value++;
        }
    }

    // Print the matrix in a spiral pattern
    for ( i = 0; i < SIZE; i++) {
        for ( j = 0; j < SIZE; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

   
}

