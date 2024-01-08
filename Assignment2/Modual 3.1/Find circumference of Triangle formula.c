#include<stdio.h>

main() {
    float a, b, c, perimeter;

    printf("Enter the length of side 'a': ");
    scanf("%f", &a);

    printf("Enter the length of side 'b': ");
    scanf("%f", &b);

    printf("Enter the length of side 'c': ");
    scanf("%f", &c);

    perimeter = a + b + c;

    printf("Perimeter of the triangle is: %.2f units\n", perimeter);

}

