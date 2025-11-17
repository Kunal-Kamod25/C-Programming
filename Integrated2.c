#include <stdio.h>
#include <stdlib.h>

// Function declarations
void Sorting();
void Knapsack();

int main() 
{
    printf("Starting Integrated Knapsack Program...\n\n");

    Sorting();   // Step 1: Sort the input data
    Knapsack();  // Step 2: Run the knapsack process

    printf("\nProgram executed successfully!\n");
    return 0;
}

// --------------------------------------------
// SORTING FUNCTION
// --------------------------------------------
void Sorting() 
{
    int n, M;
    float sp;

    FILE *in = fopen("Knapsack1.txt", "r");
    FILE *out = fopen("output-Sorting-part.txt", "w");

    if ((in == NULL) || (out == NULL)) 
    {
        printf("Error opening input or output file.\n");
        exit(1);
    }

    // Read input values according to file format
    if (fscanf(in, "n %d", &n) != 1) 
    {
        printf("Error: Missing or invalid 'n' value in input file.\n");
        fclose(in);
        fclose(out);
        exit(1);
    }

    if (fscanf(in, "\nM %d", &M) != 1) 
    {
        printf("Error: Missing or invalid 'M' value in input file.\n");
        fclose(in);
        fclose(out);
        exit(1);
    }

    if (fscanf(in, "\nSP %f", &sp) != 1) 
    {
        printf("Error: Missing or invalid 'SP' value in input file.\n");
        fclose(in);
        fclose(out);
        exit(1);
    }

    char header[20];
    if (fscanf(in, "%s", header) != 1) 
    {
        printf("Error: Missing 'Items' line in input file.\n");
        fclose(in);
        fclose(out);
        exit(1);
    }

    float weight[n], cost[n], profit[n], ratio[n];

    for (int i = 0; i < n; i++) 
    {
        if (fscanf(in, "%f %f", &weight[i], &cost[i]) != 2) 
        {
            printf("Error: Missing or invalid data at item %d.\n", i + 1);
            fclose(in);
            fclose(out);
            exit(1);
        }
        profit[i] = sp - cost[i];
        ratio[i] = profit[i] / weight[i];
    }

    // Selection sort by profit/weight ratio descending order
    for (int i = 0; i < n - 1; i++) 
    {
        int max = i;
        for (int j = i + 1; j < n; j++)
            if (ratio[j] > ratio[max])
                max = j;

        float temp;
        temp = ratio[i]; ratio[i] = ratio[max]; ratio[max] = temp;
        temp = weight[i]; weight[i] = weight[max]; weight[max] = temp;
        temp = cost[i]; cost[i] = cost[max]; cost[max] = temp;
        temp = profit[i]; profit[i] = profit[max]; profit[max] = temp;
    }

    fprintf(out, "Item\tWeight\tCost\tProfit\tProfit/Weight\n");
    for (int i = 0; i < n; i++) 
    {
        fprintf(out, "%d\t%.2f\t%.2f\t%.2f\t%.2f\n",
                i + 1, weight[i], cost[i], profit[i], ratio[i]);
    }

    fclose(in);
    fclose(out);

    printf("Data sorted successfully and written into output-Sorting-part.txt\n");
}

// --------------------------------------------
// KNAPSACK FUNCTION
// --------------------------------------------
void Knapsack() {
    int n = 0;
    float M = 0.0;

    FILE *in = fopen("output-Sorting-part.txt", "r");
    FILE *mainFile = fopen("Knapsack1.txt", "r");
    FILE *out = fopen("output-Knapsack.txt", "w");

    if ((in == NULL) || (out == NULL) || (mainFile == NULL)) 
    {
        printf("Error opening one or more files for knapsack.\n");
        exit(1);
    }

    // Read M value from main input file
    int dummy;
    float dummySP;
    if (fscanf(mainFile, "n %d", &dummy) != 1 ||
        fscanf(mainFile, "\nM %f", &M) != 1 ||
        fscanf(mainFile, "\nSP %f", &dummySP) != 1) 
        {
        printf("Error: Missing or invalid values in Knapsack1.txt.\n");
        fclose(mainFile);
        fclose(in);
        fclose(out);
        exit(1);
    }
    fclose(mainFile);

    // Skip header line
    char temp[100];
    if (fgets(temp, sizeof(temp), in) == NULL) 
    {
        printf("Error: Missing header in output-Sorting-part.txt.\n");
        fclose(in);
        fclose(out);
        exit(1);
    }

    int item_no[100];
    float weight[100], cost[100], profit[100], ratio[100];

    while (fscanf(in, "%d%f%f%f%f",
                  &item_no[n], &weight[n], &cost[n], &profit[n], &ratio[n]) == 5) 
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
        printf("Error: No valid data in output-Sorting-part.txt.\n");
        fclose(in);
        fclose(out);
        exit(1);
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
}
