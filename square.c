#include<stdio.h>
int main()
{
	int i=0;
	int n=0;
	int ans=0;
	
	printf("Enter The Number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ans+=(i*i);
	}
	printf("The Sum Of square is: %d\n",ans);
	return 0;
}

