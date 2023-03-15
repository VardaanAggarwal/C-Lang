#include <stdio.h>
int main(){
    int arr[10] , n , k;
    printf("Enter the value till which you want to enter number : ");
    scanf("%d" , &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d\t" , arr[i]);
    }
    printf("\nEnter the index in which you want to insert new element : ");
    scanf("%d" ,&k);
    for (int i = n-1; i >= k; i--)
    {
        /* code */
        arr[i+1] = arr[i];
    }
    printf("Enter the value : ");
    scanf("%d" , &arr[k]);
    for (int i = 0; i < n+1; i++)
    {
        /* code */
        printf("%d\n" , arr[i]);
    }
}