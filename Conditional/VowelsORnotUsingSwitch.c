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
       switch (c)
       {
       case 'a': 
            printf("Vowel");
            break;
        case 'e': 
            printf("Vowel");
            break;
        case 'i': 
            printf("Vowel");
            break;
        case 'o': 
            printf("Vowel");
            break;
        case 'u': 
            printf("Vowel");
            break;
        case 'A': 
            printf("Vowel");
            break;
        case 'E': 
            printf("Vowel");
            break;
        case 'I': 
            printf("Vowel");
            break;
        case 'O': 
            printf("Vowel");
            break;
        case 'U': 
            printf("Vowel");
            break;
        default: 
            printf("Consonant");
       }    
    }
    else
    {
        printf("%c is a not even a alphabet biro you don't know alphabets , lol!! . " , c);
    }
}