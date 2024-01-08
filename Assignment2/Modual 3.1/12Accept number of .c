#include <stdio.h>

main()
 {
    int numberOfStudents,totalApples;
    
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    totalApples = numberOfStudents * 5;

    printf("Total apples required: %d\n", totalApples);

}

