#include <stdio.h>
int main(void) {

    int odd = 1;
    int sum = 0;
    for (int i = 1; i <= 50; i++)
    {
        odd = 2*i;
        sum = sum+odd;
    }
    printf("The sum of first 50 odd integers is %d . " , sum);
}