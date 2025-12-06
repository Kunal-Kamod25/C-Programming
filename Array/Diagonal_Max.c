#include<stdio.h>
int main()
{
    int n,i,r,c;
    printf("enter size of matrix::");
    scanf("%d",&n);

    int m[n][n];
    printf("enter an matrix::\n");
    for(r=0;r<n;r++)
        for(c=0;c<n;c++)
            scanf("%d",&m[r][c]);
    
    for(i=0;i<n;i++)
        printf("%d ",m[i][i]);

    int max=m[0][0];
    for(i=0;i<n;i++)
        if(m[i][i]>max)
            max=m[i][i];
    printf("\nmax=%d",max);


    return 0;

}
