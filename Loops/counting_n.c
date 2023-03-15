#include <stdio.h>

int main()
{
    int num , i=0 ;
    printf("Enter the number n till which you want to display the counting : \n ");
    scanf("%d" , &num);

    while (i<num)
    {
        i++;
        printf("%d \n" , i);
    }
    

}