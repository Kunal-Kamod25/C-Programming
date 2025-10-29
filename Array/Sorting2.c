#include <stdio.h>

int main() 
{
    int n, M;
    float sp;

    FILE *in = fopen("Knapsack2.txt", "r");
    FILE *out = fopen("output-Sorting-part.txt", "w");

    if ((in == NULL) || (out == NULL)) 
    {
        printf("Error opening input or output file.\n");
        return 1;
    }

    // Read input values according to the input file format
    if (fscanf(in, "n %d", &n) != 1) 
    {
        printf("Error: Missing or invalid value for n in input file.\n");
        fclose(in);
        fclose(out);
        return 1;
    }

    if (fscanf(in, "\nM %d", &M) != 1) 
    {
        printf("Error: Missing or invalid value for M in input file.\n");
        fclose(in);
        fclose(out);
        return 1;
    }

    if (fscanf(in, "\nSP %f", &sp) != 1) 
    {
        printf("Error: Missing or invalid value for SP in input file.\n");
        fclose(in);
        fclose(out);
        return 1;
    }

    char header[20];
    if (fscanf(in, "%s", header) != 1) 
    {
        printf("Error: Missing 'Items' line in input file.\n");
        fclose(in);
        fclose(out);
        return 1;
    }

    float weight[n], cost[n], profit[n], ratio[n];

    for (int i = 0; i < n; i++) 
    {
        if (fscanf(in, "%f %f", &weight[i], &cost[i]) != 2) 
        {
            printf("Error: Missing or invalid data at item %d in input file.\n", i + 1);
            fclose(in);
            fclose(out);
            return 1;
        }
        profit[i] = sp - cost[i];
        ratio[i] = profit[i] / weight[i];
    }

    // Selection sort by profit/weight descending order
    for (int i = 0; i < n - 1; i++) 
    {
        int max = i;
        for (int j = i + 1; j < n; j++)
            if (ratio[j] > ratio[max])
                max = j;

        // Swap all related arrays
        float temp;
        temp = ratio[i]; ratio[i] = ratio[max]; ratio[max] = temp;
        temp = weight[i]; weight[i] = weight[max]; weight[max] = temp;
        temp = cost[i]; cost[i] = cost[max]; cost[max] = temp;
        temp = profit[i]; profit[i] = profit[max]; profit[max] = temp;
    }

    fprintf(out, "Item\tWeight\tCost\tProfit\tProfit/Weight\n");
    for (int i = 0; i < n; i++) {
        fprintf(out, "%d\t%.2f\t%.2f\t%.2f\t%.2f\n", i + 1, weight[i], cost[i], profit[i], ratio[i]);
    }

    fclose(in);
    fclose(out);

    printf("Data sorted successfully and written into output-Sorting-part.txt\n");
    return 0;
}
