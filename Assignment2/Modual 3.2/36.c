#include <stdio.h>

 main() 
 {
 	
    // Declare variables
    float unitCharges, totalBill, surcharge;

    // Input electricity unit charges
    printf("Enter the electricity unit charges: ");
    scanf("%f", &unitCharges);

    // Calculate total electricity bill based on conditions
    if (unitCharges <= 50)
	 {
        totalBill = unitCharges * 0.50;
    } else if (unitCharges <= 150) 
	{
        totalBill = 50 * 0.50 + (unitCharges - 50) * 0.75;
    } else if (unitCharges <= 250) 
	{
        totalBill = 50 * 0.50 + 100 * 0.75 + (unitCharges - 150) * 1.20;
    } else 
	{
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unitCharges - 250) * 1.50;
    }

    // Calculate surcharge (20% of total bill)
    surcharge = 0.20 * totalBill;

    // Add surcharge to the total bill
    totalBill += surcharge;

    // Display the total electricity bill
    printf("\nTotal Electricity Bill: Rs. %.2f\n", totalBill);

   
}

