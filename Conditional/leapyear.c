#include <stdio.h>

int main()
{
    int num;
    printf("Check whether a year is leap year or not : \n");
    scanf("%d" , &num);

    if ((num%4==0)&&(num%100!=0)&&(num%400==0))
    {
        printf("The year you have entered is a leap year.");
    }

    else
    {
        printf("The year you have entered is not a leap year.");
    }
}