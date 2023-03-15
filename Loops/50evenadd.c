#include <stdio.h>

int main()
{
    int add = 0 , n = 0 ;
    

    while (n<=100)
    {
        n += 2 ;
        add = add + n ;
    }

    printf("Sum of first 50 even numbers is : %d\n" , add);

    

}