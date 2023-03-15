#include <stdio.h>
int main()
{
    int weekday_num;
    printf("Enter a week number to convert into week day : ");
    scanf("%d" , &weekday_num);

    if (weekday_num==1)
    {
        printf("The weekday of number %d is monday . " , weekday_num);
    }
    else if (weekday_num==2)
    {
        printf("The weekday of number %d is tuesday . " , weekday_num);
    }
    else if (weekday_num==3)
    {
        printf("The weekday of number %d is wednesday . " , weekday_num);
    }
    else if (weekday_num==4)
    {
        printf("The weekday of number %d is thursday . " , weekday_num);
    }
    else if (weekday_num==5)
    {
        printf("The weekday of number %d is friday . " , weekday_num);
    }
    else if (weekday_num==6)
    {
        printf("The weekday of number %d is saturday . " , weekday_num);
    }
    else if (weekday_num==7)
    {
        printf("The weekday of number %d is sunday . " , weekday_num);
    }
    

}