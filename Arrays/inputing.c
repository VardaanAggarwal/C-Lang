#include <stdio.h>
int main(void){
    int num ;
    printf("Enter the number of students : ");
    scanf("%d" , &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d" , &arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < num; i++)
    {
        /* code */
        ans = ans + arr[i];
    }
    printf("The sum of the following numbers that you have entered is : %d \n" , ans);
    for (int i = 0; i < num; i++)
    {
        printf("%d " , arr[i]);
    }
    
}