#include <stdio.h>
void funcOddEven(int num){
    if (num<1) {
        printf("You have entered an invalid number .");
    } else if (num==1){
        printf("The number you have entered is an odd number .");
    } else if (num>1) {
        if (num%2==0)
        {
            printf("You have entered an even number .");
        } else {
            printf("You have entered an odd number .");
        }      
    }
    

}
int main(){
    int num;
    printf("Enter a number to know if it's odd or even : ");
    scanf("%d" , &num);
    funcOddEven(num);

}