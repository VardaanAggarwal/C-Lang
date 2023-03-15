#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to check whether it is divisible by 5 and 11 or not :");
    scanf("%d" , &num);

    if ((num%5==0)&&(num%11==0))
    {
        printf("\nThe number %d is divisible by both 5 and 11." , num);
    }

    else
    printf("The number is not divisible by both 5 and 11 . ");
    
}