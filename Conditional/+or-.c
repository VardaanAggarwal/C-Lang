#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check whether it is a postive or negative number or a zero : \n");
    scanf("%d" , &num);
    if (num==0)
    {
        printf("\nThe number you have entered is a ZERO.");
    }
    else if (num>0)
    {
        printf("\nThe number you have entered is a positive number .");
    }
    else
    printf("\nThe number you have entered is a negative number . ");
}