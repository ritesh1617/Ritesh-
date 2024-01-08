#include <stdio.h>

main()
 {
 	
    // Declare variables
    int marksMaths, marksPhysics, marksChemistry, totalAllSubjects, totalMathsPhysics;

    // Input marks in Physics
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &marksPhysics);

    // Input marks in Chemistry
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &marksChemistry);

    // Input marks in Mathematics
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &marksMaths);

    // Calculate total marks in all three subjects
    totalAllSubjects = marksPhysics + marksChemistry + marksMaths;

    // Calculate total marks in Maths and Physics
    totalMathsPhysics = marksMaths + marksPhysics;

    // Check eligibility based on criteria
    if ((marksMaths >= 65 && marksPhysics >= 55 && marksChemistry >= 50 && totalAllSubjects >= 190) ||
        (totalMathsPhysics >= 140))
		 {
        printf("\nThe candidate is eligible for admission.\n");
    } else
	 {
        printf("\nThe candidate is not eligible for admission.\n");
    }

    
}

