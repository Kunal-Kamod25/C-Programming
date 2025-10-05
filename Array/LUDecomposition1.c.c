#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function Prototypes
void luGaussian(double **A, double **L, double **U, int n);
void forwardSubstitution(double **L, double *b, double *y, int n);
void backwardSubstitution(double **U, double *y, double *x, int n);
double **inverse(double **A, int n);
void printMatrix(double **A, int n);

int main() 
{
    char line[1024];
    double **A;
    int n = 0;

    printf("Enter first row of matrix:\n");
    if (!fgets(line, sizeof(line), stdin)) 
    {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }
    char *token = strtok(line, " \t\n");
    double *firstRow = NULL;
    while (token) 
    {
        firstRow = realloc(firstRow, (n + 1) * sizeof(double));
        firstRow[n] = atof(token);
        n++;
        token = strtok(NULL, " \t\n");
    }
    printf("Matrix size detected: %d x %d\n", n, n);
    A = malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++)
    {
        A[i] = malloc(n * sizeof(double));

    for (int j = 0; j < n; j++)
        A[0][j] = firstRow[j];
    }
    free(firstRow);
    printf("Enter remaining %d rows (%d values per row):\n", n - 1, n);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &A[i][j]);
        }
    }
    printf("\nInput matrix:\n");
    printMatrix(A, n);
    double **invA = inverse(A, n);

    printf("\nInverse matrix:\n");
    printMatrix(invA, n);
    for (int i = 0; i < n; i++) 
    {
        free(A[i]);
        free(invA[i]);
    }
    free(A);
    free(invA);

    return 0;
}
void luGaussian(double **A, double **L, double **U, int n)//Gauss-Elimination 
{
    for (int i = 0; i < n; i++) //Initialize U=A & L=identity 
    {
        for (int j = 0; j < n; j++) 
        {
            U[i][j] = A[i][j];
            L[i][j] = (i == j) ? 1.0 : 0.0;
        }
    }

    for (int k = 0; k < n - 1; k++) 
    {
        if (U[k][k] == 0) 
        {
            printf("Zero pivot encountered, cannot proceed!\n");
            exit(1);
        }
        for (int i = k + 1; i < n; i++) 
        {
            double factor = U[i][k] / U[k][k];
            L[i][k] = factor;
            for (int j = k; j < n; j++) 
            {
                U[i][j] -= factor * U[k][j];
            }
        }
    }
}
void forwardSubstitution(double **L, double *b, double *y, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        y[i] = b[i];
        for (int j = 0; j < i; j++)
            y[i] -= L[i][j] * y[j];
    }
}
void backwardSubstitution(double **U, double *y, double *x, int n) 
{
    for (int i = n - 1; i >= 0; --i) 
    {
        x[i] = y[i];
        for (int j = i + 1; j < n; ++j)
            x[i] -= U[i][j] * x[j];
        x[i] /= U[i][i];
    }
}
double **inverse(double **A, int n) 
{
    double **L = malloc(n * sizeof(double *));
    double **U = malloc(n * sizeof(double *));
    double **invA = malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) 
    {
        L[i] = calloc(n, sizeof(double));
        U[i] = calloc(n, sizeof(double));
        invA[i] = calloc(n, sizeof(double));
    }
    luGaussian(A, L, U, n);
    for (int j = 0; j < n; ++j) 
    {
        double *e = calloc(n, sizeof(double));
        e[j] = 1.0;
        double *y = calloc(n, sizeof(double));
        double *x = calloc(n, sizeof(double));

        forwardSubstitution(L, e, y, n);
        backwardSubstitution(U, y, x, n);

        for (int i = 0; i < n; i++)
        {
            invA[i][j] = x[i];
        }
        free(e);
        free(y);
        free(x);
    }
    for (int i = 0; i < n; i++) 
    {
        free(L[i]);
        free(U[i]);
    }
    free(L);
    free(U);

    return invA;
}
void printMatrix(double **A, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            printf("%10.4lf ", A[i][j]);
        }
        printf("\n");
    }
}
