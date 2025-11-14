int main()
{
	int num=0;
	int ans=-1;
	printf("Enter the number");
	scanf("%d",&num);
	if(num<10)
		ans=1;
	else if(num>10)
		ans=2;
	else
		ans=3;
		
	switch(ans)
	{
		case 1:
			printf("Small");
			break;
		case 2:
			printf("Large");
			break;
		case 3:
			printf("Equal");
			break;
	}
	return 0;
}
