#include <stdio.h>
int main(){
    int arr[10];
    printf("Enter the number of elements that you want to enter : ");
    int n;
    scanf("%d" , &n);
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d" , &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d\t" , arr[i]);
    }
    
    
    return 0 ;
}