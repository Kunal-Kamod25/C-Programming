#include <stdio.h>

int main() 
{
    int n = 0;
    float M = 0.0;

    FILE *in = fopen("output-Sorting-part.txt", "r");
    FILE *mainFile = fopen("Knapsack1.txt", "r");
    FILE *out = fopen("output-Knapsack.txt", "w");

    if ((in == NULL) || (out == NULL) || (mainFile == NULL)) 
    {
        printf("Error opening required files.\n");
        return 1;
    }

    // Read capacity M from the main input file
    int dummy;
    float dummySP;
    if (fscanf(mainFile, "n %d", &dummy) != 1) 
    {
        printf("Error: Missing or invalid n value in input file.\n");
        fclose(mainFile);
        fclose(in);
        fclose(out);
        return 1;
    }

    if (fscanf(mainFile, "\nM %f", &M) != 1) 
    {
        printf("Error: Missing or invalid M value in input file.\n");
        fclose(mainFile);
        fclose(in);
        fclose(out);
        return 1;
    }

    if (fscanf(mainFile, "\nSP %f", &dummySP) != 1) 
    {
        printf("Error: Missing or invalid SP value in input file.\n");
        fclose(mainFile);
        fclose(in);
        fclose(out);
        return 1;
    }

    fclose(mainFile);

    // Skip the header line from sorted file
    char temp[100];
    if (fgets(temp, sizeof(temp), in) == NULL) 
    {
        printf("Error: Missing header in output-Sorting-part.txt.\n");
        fclose(in);
        fclose(out);
        return 1;
    }

    int item_no[100];
    float weight[100], cost[100], profit[100], ratio[100];

    while (fscanf(in, "%d%f%f%f%f", &item_no[n], &weight[n], &cost[n], &profit[n], &ratio[n]) == 5) 
    {
        n++;
        if (n >= 100) 
        {
            printf("Warning: Only first 100 items processed.\n");
            break;
        }
    }

    if (n == 0) 
    {
        printf("Error: No valid data found in output-Sorting-part.txt.\n");
        fclose(in);
        fclose(out);
        return 1;
    }

    fclose(in);

    float total_profit = 0, remaining = M;

    fprintf(out, "Capacity of Knapsack (M): %.2f\n\n", M);
    fprintf(out, "Sel\tItem\tWeight\tCost\tProfit\tP/W Ratio\tTaken\n");
    fprintf(out, "______________________________________________________\n");

    int selected_count = 0;

    for (int i = 0; i < n && remaining > 0; i++) 
    {
        float fraction;
        if (weight[i] <= remaining) 
        {
            fraction = 1.0;
            remaining -= weight[i];
            total_profit += profit[i];
        } 
        else 
        {
            fraction = remaining / weight[i];
            total_profit += profit[i] * fraction;
            remaining = 0;
        }

        selected_count++;
        fprintf(out, "%d\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
                selected_count, item_no[i], weight[i], cost[i], profit[i], ratio[i], fraction);
    }

    fprintf(out, "______________________________________________________\n");
    fprintf(out, "Total Profit = %.2f\n", total_profit);

    fclose(out);

    printf("Knapsack result saved successfully to output-Knapsack.txt\n");
    return 0;
}
