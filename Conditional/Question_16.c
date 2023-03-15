#include <stdio.h>

int main()
{
    int side1 , side2 , side3 , triangle , isosceles , equilateral ;
    printf("Enter the first side of the triangle : ");
    scanf("%d" , &side1);
    printf("Enter the second side of the triangle : ");
    scanf("%d" , &side2);
    printf("Enter the third side of the triangle : ");
    scanf("%d" , &side3);

    triangle = ((side1+side2)>side3 && (side2+side3)>side1 && (side1+side3)>side2);
    isosceles = (side1==side2 || side2==side3 || side1==side3);
    equilateral = (side1==side2 && side1==side3 && side2==side3);
    
    if (triangle)
    {
        if (isosceles)
        {
            printf("It is a isosceles triangle . ");
        }
        
        else if (equilateral)
        {
            printf("It is a equilateral triangle . ");
        }
        
        else
        {
            printf("It is a scalene triangle . ");
        }
        
        
    }
    
    else
    {
        printf("It is not a triangle . ");
    }
    

}