#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,key;
    printf("enter a num:");
    scanf("%d",&n);

    int *a=(int *)malloc(sizeof(int)*n);
    if(a==NULL)
    {
        printf("memory not allocate.....\n");
        exit(-1);
    }

    printf("enter array element::");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter the key::");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("key is found=%d\n",i);
            break;
        }
    }
    if(a[i]!=key)
        printf("not found key\n");
    
    free(a);
    return 0;
}
