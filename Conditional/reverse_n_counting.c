#include <stdio.h>

int main()
{
    int num = 0 , i ;
    printf("Enter a number n to get it's counting in reverse till 1 : ");
    scanf("%d" , &i);

    while (num<i)
    {
        
        printf("%d \n " , i );
        i--;
        
    }
    
}