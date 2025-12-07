#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter (x,y):");
    scanf("%d %d",&x,&y);
    int Max=ismax(x,y);
    printf("%d is max",Max);
    return 0;
}

int ismax(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
        
}
