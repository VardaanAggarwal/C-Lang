#include <stdio.h>
void arms(int num){
    int arm = 0 , i , originalNumber = num;
    while (num>0)
    {
        /* code */
        int rem = num%10;
        arm = arm*10 + rem ;
        num = num/10;
    }
    printf("%d %d" , originalNumber , arm);
    if (originalNumber == arm)
    {
        /* code */
        printf("True");
    }
    else
        printf("False");


}

int main() {
    int num ;
    printf("Enter a number to find if it is an Armstrong number or not : ");
    scanf("%d" , &num);
    arms(num);
}