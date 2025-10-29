#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;

    printf("Enter an  integer: \n");
    scanf("%d",&a);

    printf("Enter an  float: \n");
    scanf("%f",&b);

    printf("Enter an  double: \n");
    scanf("%lf",&c);

    printf("Enter an  character: \n");
    scanf(" %c",&d);

    printf("You Entered integer: %d (Size = %lu bytes)\n",a,sizeof(a));
    printf("You Entered float= %f (Size = %lu bytes)\n",b,sizeof(b));
    printf("You Entered double= %lf (Size = %lu bytes)\n",c,sizeof(c));
    printf("You Entered character= %c (Size = %lu bytes)\n",d,sizeof(d));

    return 0;
}

