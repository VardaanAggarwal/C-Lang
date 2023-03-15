#include<stdio.h>
int main(){
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d" , &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d" , a[i]);

    }
    printf("\n");
    for (int i = 9; i > -1; i--)
    {
        /* code */
        printf("%d" , a[i]);
    }
    
    
    
    return 0 ;
}