#include <stdio.h>
int binarySearch(int arr[] , int target , int length){
    int start = 0 ;
    int end = length - 1;
    while (start <= end)
    {
        int mid = start + (end - start);
        if(target == arr[mid]){
            return mid;
        }
        else if (target < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
    
}
int main()
{
    int arr[] = {1, 2, 5, 7, 19, 199, 209};
    int target = 209;
    int length = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr , target , length);
    printf("%d is the index at which target is found . \n" , result);

}