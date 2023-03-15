#include <stdio.h>
int main(void){
    int i , n ;
    printf("Display first n numbers : \n ");
    scanf("%d" , &n);

    for ( i = 1; i <= n; i++)
    {
        printf("%d " , i);
    }
    
}