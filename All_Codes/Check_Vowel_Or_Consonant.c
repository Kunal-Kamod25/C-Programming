#include<stdio.h>

int main()
{
    int ch;
    printf("Enter Character: ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("%c is a Vowel. \n",ch);
    else
        printf("%c is a consonant. \n",ch);
}