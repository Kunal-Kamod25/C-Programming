
#include<stdio.h>
struct Rectangle
{
    float length;
    float height;
};

int main()
{

    struct Rectangle r;
    r.length=20;
    r.height=20;
    float area=r.length*r.height;
    printf("Area=%f\n",area);
    return 0;
}
