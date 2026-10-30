
#include <stdio.h>

int main()
{
    float price, totalCost, discount, finalAmount;
    int quantity;

    printf("Enter the price of one item: ");
    scanf("%f", &price);

    printf("Enter the quantity purchased: ");
    scanf("%d", &quantity);

    totalCost = price * quantity;

    if (totalCost >= 1000)
    {
        discount = totalCost * 0.10;
    }
    else
    {
        discount = 0;
    }

    finalAmount = totalCost - discount;

    printf("Total Cost: KSh %.2f\n", totalCost);
    printf("Discount: KSh %.2f\n", discount);
    printf("Final Amount Payable: KSh %.2f\n", finalAmount);

    return 0;
}
