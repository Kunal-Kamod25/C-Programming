#include <stdio.h>
int main() 
{
    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
    {
        printf("%c is an Alphabet.\n", ch);
    } else 
    {
        printf("%c is not an Alphabet.\n", ch);
    }
    return 0;
}
