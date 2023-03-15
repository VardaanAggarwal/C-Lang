#include <stdio.h>
int main()
{
    int angle1 , angle2 , angle3 , triangle;
    printf("Input 3 angles to check whether it is a triangle or not : ");
    scanf("%d %d %d" , &angle1 , &angle2 , &angle3);

    triangle = (((angle1+angle2)>=angle3) && ((angle2+angle3)>=angle1) && ((angle1+angle3)>=angle2));

    if (triangle<=180)
    {
        printf("It is a Triangle . ");
    }
    else
    {
        printf("It is not a Triangle . ");
    }
}