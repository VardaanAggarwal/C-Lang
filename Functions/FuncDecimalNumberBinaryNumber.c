#include <stdio.h>
void funcBinaryConversion(int num) {
    int var , ans = 0 , alt , finalAns = 0 ;
    while (num!=0)
    {
        var = num%2;
        num = num/2;
        ans = var + ans*10;
    }
    while (ans!=0)
    {
        alt = ans%10;
        ans /= 10;
        finalAns = finalAns*10 + alt;
    }
    
    printf("%d" , finalAns);
    
}
int main() {
    int num ;
    printf("Enter any decimal number to know it's binary number : ");
    scanf("%d" , &num);
    funcBinaryConversion(num);
}