#include <stdio.h>
int main()
{
    int num1 , num2 , num3;
    printf("Enter any three numbers of your choice to find the maximum number between the three number:\n");
    scanf("%d %d %d" , &num1 , &num2 , &num3);
    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("The maximum number out of three is : %d" , num1);
        }
        else
        printf("The maximum number out of three is : %d" , num3);      
    }
    else if (num2>num1)
    {
        if (num2>num3)
        {
            printf("The maximum number out of three is : %d" , num2);
        }
        else
        printf("The maximum number out of three is : %d" , num3);
    } else { printf("The maximum number out of three is : %d" , num3); }
}