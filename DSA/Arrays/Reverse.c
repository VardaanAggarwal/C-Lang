#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(arr)/4;
    int start = 0;
    int end = length-1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < length; i++)
    {
        /* code */
        printf("%d\t" , arr[i]);
    }
    
    
    return 0 ;
}