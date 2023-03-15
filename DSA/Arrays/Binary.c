#include <stdio.h>
int main()
{
    int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    int target = 5;
    int start = 0;
    int length = sizeof(arr) / 4;
    int end = 10 - 1;
    int counter = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            printf("%d\n", mid);
            counter++;
            break;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (counter == 0)
    {
        printf("-1");
    }
}
