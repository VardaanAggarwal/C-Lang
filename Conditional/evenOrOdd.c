#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to check if it is odd or even : ");
    scanf("%d" , &num);

    if (num%2==0)
    {
        printf("The number you have entered is an even number . ");
    }

    else if (num%2!=0)
    {
        printf("The number you have entered is a odd number .  ");
    }
}