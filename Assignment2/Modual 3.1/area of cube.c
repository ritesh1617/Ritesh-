#include<stdio.h>

 main() 
 {
    float side, area;

    
    printf("Enter the side length of the cube: ");
   
    scanf("%f", &side);

   
    area = 6 * side * side;

    
    printf("Surface area of the cube is: %.2f square units\n", area);

}

