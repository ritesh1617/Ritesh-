#include <stdio.h>

main() {
    char studentNames[5][50];  // Assuming each student name is of maximum length 50
     int i;
     
    // Input names of 5 students from the user
    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++)
	 {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", studentNames[i]);  // Note: %s reads a string without spaces
    }

    // Display the names of students
    printf("\nNames of students:\n");
    for ( i = 0; i < 5; i++)
	 {
        printf("%d. %s\n", i + 1, studentNames[i]);
    }

   
}

