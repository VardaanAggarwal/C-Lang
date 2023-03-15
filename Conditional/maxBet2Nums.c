#include <stdio.h>
int main()
{
    int num_1 , num_2 ;
    printf("Enter any two numbers of you choice:\n");
    scanf("%d %d" , &num_1 , &num_2);
    
    if (num_1>num_2)
    {
        printf("\n%d is the largest number between the two numbers you have entered." , num_1);
    }

    else if (num_2>num_1)
    {
        printf("\n%d is the largest number between the two numbers you have entered." , num_2);
    }

    else 
    printf("Both numbers are equal.");
}