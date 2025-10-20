#include<stdio.h>

int main()
{
    float cost , sell , profit;
    printf("Enter Cost price and Sell Price: ");
    scanf("%f %f",&cost , &sell);

    if(sell > cost)
        printf("Profit=%.2F\n",sell-cost);
    else if(cost > sell)
        printf("Loss=%.2f",cost-sell);
    else
        printf("No profit , No Loss\n");
}