#include <stdio.h>

int main() 
{
    float costPrice, sellingPrice, amount;
    printf("Enter Cost Price (CP): ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price (SP): ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) 
    {
        amount = sellingPrice - costPrice;
        printf("Profit = %.2f\n", amount);
    } 
    else if (costPrice > sellingPrice) 
    {
        amount = costPrice - sellingPrice;
        printf("Loss = %.2f\n", amount);
    } 
    else 
    {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
