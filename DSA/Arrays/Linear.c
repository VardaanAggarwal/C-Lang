#include<stdio.h>
int main(){
    int arr[] = {1, 2, 98, 77, 65, 8};
    int target = 98;
    int length = sizeof(arr)/4;
    int counter = 0;
    for (int i = 0; i < length ; i++)
    {
        if(arr[i] == target){
            counter++;
            printf("The target element is present in the given array .");
            break;
        }
    }
    if(counter == 0){
        printf("The given target is not present in the given array !");
    }
    
}
