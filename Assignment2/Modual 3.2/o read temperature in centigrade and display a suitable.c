#include <stdio.h>

main()
 {
 	
    // Declare variable
    float temperature;

    // Input temperature in centigrade
    printf("Enter the temperature in centigrade: ");
    scanf("%f", &temperature);

    // Display a message based on temperature range
    if (temperature < 0) 
	{
        printf("\nFreezing weather\n");
    } else if (temperature >= 0 && temperature <= 10)
	 {
        printf("\nVery Cold weather\n");
    } else if (temperature > 10 && temperature <= 20)
	 {
        printf("\nCold weather\n");
    } else if (temperature > 20 && temperature <= 30) 
	{
        printf("\nNormal in Temp\n");
    } else if (temperature > 30 && temperature <= 40)
	 {
        printf("\nIt's Hot\n");
    } else
	 {
        printf("\nIt's Very Hot\n");
    }

    
}

