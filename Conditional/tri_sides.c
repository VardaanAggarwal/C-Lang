#include <stdio.h>

int main()
{
    int side1 , side2 , side3 , result;
    printf("Enter the first side of the triangle : ");
    scanf("%d" , &side1);
    printf("\nEnter the second side of te triangle : ") ;
    scanf("%d" , &side2);
    printf("\nEnter the third side of te triangle : ") ;
    scanf("%d" , &side3);
    result = ((side1+side2)>side3 && (side2+side3)>side1 && (side3+side1)>side2);
    if (result)
    {
        printf("\nIt is a triangle . ");
    }
    else
    {
        printf("It is not a triangle . ");
    }
    
    





}