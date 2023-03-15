#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 3, 4, 4, 5};
    int length = sizeof(arr)/4;
    int length2 = sizeof(arr2)/4;
    int counter = 0;
    if(length < length2){
        for (int i = 0; i < length; i++)
        {
            for(int j = i ; j < length2 ; j++){
                if(arr[i] == arr2[j]){
                    counter++;
                }
            }
        }
        
    }
    else{
        for (int i = 0; i < length2; i++)
        {
            /* code */
            for(int j = i ; j < length ; j++){
                if(arr2[i] == arr[j]){
                    counter++;
                }
            }
        }
    }
    if(counter == length2 || counter == length){
        printf("True");
    }
    else{
        printf("False");
    }
    
    return 0 ;
}