#include <stdio.h>

main()
 {
 	
    // Declare variables
    float costPrice, sellingPrice, profit, loss;

    // Input cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit and loss
    if (sellingPrice > costPrice)
	 {
        profit = sellingPrice - costPrice;
        printf("\nProfit: %.2f\n", profit);
    } 
	else if (costPrice > sellingPrice) 
	{
        loss = costPrice - sellingPrice;
        printf("\nLoss: %.2f\n", loss);
    } 
	else 
	{
        printf("\nNo profit, no loss.\n");
    }

    
}

