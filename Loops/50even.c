#include <stdio.h>

int main()
{
    int even = 2;

    printf("First 50 even number are \n");

    // while (even<=100)
    // {

    //     printf("%d\n" , even);

    //     even = even+2 ;

    // }

    do
    {
        printf("%d\n", even);
        even = even + 2;
    } while (even <= 100);
}