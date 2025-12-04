#include<stdio.h>
struct Player
{
    char name[20];
    int run;
    int matches;
};

int main()
{
    struct Player p;
    printf("enetr player name::");
    scanf("%s",&p.name);
    printf("enetr player run::");
    scanf("%d",&p.run);
    printf("enetr player matches::");
    scanf("%d",&p.matches);

    float avg=p.run/p.matches;
    printf("Avg=%f",avg);

    return 0;

}
