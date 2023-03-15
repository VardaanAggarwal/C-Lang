#include <stdio.h>
void swap(int num1 , int num2 ) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("The first number is now %d and the second number is now %d . " , num1 , num2);
}
int main(){
    int num1 , num2;
    printf("Enter first number of your choice : ");
    scanf("%d" , &num1);
    printf("Enter the second number of your choice : ");
    scanf("%d" , &num2);
    swap(num1 , num2);
}