#include <stdio.h>
int main () {
    int max ;
    int arr[10] = {83,128,338,291,284,92,392,81,99,71};
    max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("The maximum number in the following arrays is %d . \n" , max);
    
    
}