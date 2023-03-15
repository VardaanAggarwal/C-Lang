#include <stdio.h>
int main()
{
    int month;
    printf("Enter the number of the month to know the number of days :");
    scanf("%d" , &month);
    if (month == 1)
        printf("The month is January and it has 31 days . ");   
    else if (month == 2)
        printf("The month is February and it has 28 or 29 days .");
    else if (month == 3)
        printf("The month is March and it has 31 days .");
    else if (month == 4)
        printf("The month is April and it has 30 days .");
    else if (month == 5)
        printf("The month is May and it has 31 days .");
    else if (month == 6)
        printf("The month is June and it has 30 days .");
    else if (month == 7)
        printf("The month is July and it has 31 days .");
    else if (month == 8)
        printf("The month is August and it has 31 days .");
    else if (month == 9)
        printf("The month is September and it has 30 days .");
    else if (month == 10)
        printf("The month is October and it has 31 days .");
    else if (month == 11)
        printf("The month is November and it has 30 days .");
    else if (month == 12)
        printf("The month is December and it has 31 days ."); 
    else
        printf("The month of this number doesn't exist .");    
}