#include <stdio.h>
void fact(int num){
    int fact = 1 , sum = 0 ;
    for (int i = num ; i >= 1 ; i--)
    {
        while (num>1)
        {
            fact = fact*num;
            num--;
        }
        fact = fact / i;
        sum = sum+fact;

    }
  
    printf("%d" , sum);
    
}
int main () {
    int num ;
    printf("Enter a number : ");
    scanf("%d" , &num);
    fact(num);

}