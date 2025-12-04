#include<stdio.h>
struct Employee
{
    int id;
    float salary;
};
int main()
{
    struct Employee e1;
    e1.id=101;
    e1.salary=10000;
    
    printf("Employee ID: %d\n",e1.id);
    printf("Employee salary: %f\n",e1.salary);

    return 0;
}
