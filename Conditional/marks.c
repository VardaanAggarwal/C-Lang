#include <stdio.h>

int main()
{

    int maths , physics , chemistry , biology , computer ; 
    int marks_scored ;
    float percentage ;
    printf("Enter the marks of physics out of 100 : ");
    scanf("%d" , &physics);
    printf("Enter the marks of maths out of 100 : ");
    scanf("%d" , &maths);
    printf("Enter the marks of chemistry out of 100 : ");
    scanf("%d" , &chemistry);
    printf("Enter the marks of biology out of 100 : ");
    scanf("%d" , &biology);
    printf("Enter the marks of computer out of 100 : ");
    scanf("%d" , &computer);

    marks_scored = maths + physics + chemistry + biology + computer ;

    percentage = marks_scored/5 ;


    if (percentage>=90)
    {
        printf("Grade A !! \n");
    }
    else if (percentage>=80)
    {
        printf("Grade B !! \n");
    }
    else if (percentage>=70)
    {
        printf("Grade C !! \n");
    }
    else if (percentage>=60)
    {
        printf("Grade D !! \n");
    }
    else if (percentage>=50)
    {
        printf("Grade E !! \n");
    }
    else if (percentage>=40)
    {
        printf("Grade F !! \n");
    }

    else if (percentage<40)
    {
        printf("Fail ho gya hai apka putrrr ! \n");
    }
    
    



}