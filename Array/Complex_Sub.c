#include<stdio.h>
struct MyComplex
{
    float real;
    float img;
};

int main()
{

    struct MyComplex c1;
    c1.real=10;
    c1.img=20;

    struct MyComplex c2;
    c2.real=30;
    c2.img=40;

    struct MyComplex c3;
    c3.real=c1.real-c2.real;
    c3.img=c1.img-c2.img;

    printf("%.2f-%.2f",c3.real,c3.img);
    return 0;
}
