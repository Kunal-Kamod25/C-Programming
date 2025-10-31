#include<stdio.h>
int main()
{
    int n , sum = 0;
    printf("Enter a integer number: ");
    scanf("%d",&n);

   int i=1;
   while(i <= n)
   {
    sum = sum + i;
    ++i;
   }
   printf("Sum of all integer: %d",sum);
   return 0;
}