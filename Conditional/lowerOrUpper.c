#include <stdio.h>
int main()
{
    char ch , lowercase , uppercase;

    printf("Enter an alphabet : ");
    scanf("%c" , &ch);

    lowercase = (ch>='a' && ch<='z');
    uppercase = (ch>='A' && ch<='Z');

    if (lowercase)
    {
        printf("%c is a lowercase alphabet . " , ch);
    }
    else if (uppercase)
    {
        printf("%c is a uppercase alphabet . " , ch);
    }
    
}