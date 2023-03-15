#include <stdio.h>
int main(void) {
    int i = 1 ;
    int odd = 1;
    int sum = 0;
    while (i<=50)
    {
        odd = 2*i;
        sum += odd;
        i++;
    }
    printf("The sum of first 50 odd integers is %d . " , sum);
}