#include<stdio.h>

 main() 
 {
    float l, w, h, surface_area;

    printf("Enter the length: ");
    scanf("%f", &l);

    printf("Enter the width: ");
    scanf("%f", &w);

    printf("Enter the height: ");
    scanf("%f", &h);

    surface_area = 2 * (l * w + l * h + h * w);

    printf("Surface area of the rectangular prism is: %.2f square units\n", surface_area);

}

