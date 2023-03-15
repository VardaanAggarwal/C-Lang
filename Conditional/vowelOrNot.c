#include <stdio.h>
int main()
{
    char c , alphabet , lowercase_vowel , uppercase_vowel ;
    printf("Write a vowel or consonant : ");
    scanf("%c" , &c);
    alphabet = ((c>='a' && c<='z') || (c>='A' && c<='Z'));
    lowercase_vowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    uppercase_vowel = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    if (alphabet)
    {
        if ((lowercase_vowel) || (uppercase_vowel))
        {
            printf("%c is a vowel . " , c);
        }      
    }
    else
    {
        printf("%c is a consonant . " , c);
    }
}