#include <stdio.h>
int main(){
    int arr[10];
    printf("Enter the number of elements that you want to enter : ");
    int n;
    scanf("%d" , &n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d" , &arr[i]);
    }
    
    printf("Enter the index of element that you want to delete : ");
    int del;
    scanf("%d" , &del);
    for (int i = del; i < n; i++)
    {
        /* code */
        arr[i] = arr[i+1];
    }
    n = n-1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d\t" , arr[i]);
    }
    
    return 0 ;
}