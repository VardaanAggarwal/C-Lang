#include <stdio.h>
int main()
{
    int i , a;
    printf("Enter a number to know its multiples between 1 and 100 : ");
    scanf("%d" , &i);
    a=i;
    printf("The multiples of %d between 1 and 100 are \n" , i );
    while (i<=100)
    {
        printf("%d \n" , i);
        i+=a;
    }
    


}