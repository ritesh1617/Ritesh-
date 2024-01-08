#include <stdio.h>

main()
 {
 	
    // Declare variables
    int customerId;
    char customerName[50];
    float unitsConsumed, totalAmount;

    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

    // Calculate electricity bill based on charge rates
    if (unitsConsumed <= 350) 
	{
        totalAmount = unitsConsumed * 1.20;
    } else if (unitsConsumed > 350 && unitsConsumed <= 600) 
	{
        totalAmount = unitsConsumed * 1.50;
    } else if (unitsConsumed > 600 && unitsConsumed <= 800)
	 {
        totalAmount = unitsConsumed * 1.80;
    }
	 else
	  {
        totalAmount = unitsConsumed * 2.00;
    }

    // Display electricity bill details
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Total Amount to be Paid: %.2f\n", totalAmount);

    return 0;
}

