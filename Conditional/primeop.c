#include <stdio.h>

int main(){

    int i , n , flag=0 , num ;
    printf("Enter the maximum range to check for prime : ");
    scanf("%d" , &n);

    for ( num = 2; num <= n ; num++)
    {
        /* code */
        for ( i = 2; i <= num/2; i++)
        {
            /* code */
            if (num%i==0)
            {
                /* code */
                flag = 1;
                break;
            }
            
        }

        if (flag == 0)
        {
            /* code */
            printf("\n %d is a prime number . ", num);
        }
        else
        {
            printf("\n %d is not  prime number . " , num);
        }
        
        
    }
    


}