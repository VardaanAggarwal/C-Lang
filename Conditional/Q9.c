#include <stdio.h>
int main()
{
    char ch , alphabet , number;
    printf("Enter a character : ");
    scanf("%c" , &ch);
    alphabet = ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'));
    number = (ch>='1' && ch<='9');
    if (alphabet)
    {
        printf("%c is a alphabet . " , ch);
    }  
    else if (number)
    {
        printf("%c is a number . " , ch);
    }
    else
    {
        printf("%c is a special character . " , ch);
    }    
}

