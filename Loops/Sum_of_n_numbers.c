#include <stdio.h>
int main(void){
    int n , ans=0 ;
    printf("Enter a number to know the sum of n numbers : ");
    scanf("%d" , &n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        ans += i;

    }
    printf("The sum of numbers from 1 to %d is %d . \n" , n , ans);
    // int test = 10+9+8+7+6+5+4+3+2+1;
    // printf("%d" , test);
}