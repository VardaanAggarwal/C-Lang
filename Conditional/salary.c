#include <stdio.h>

int main()
{

    int HRA , DA , basic_salary , gross_salary ;
    printf("Enter the basic salary of the employee : ");
    scanf("%d" , &basic_salary);
    
    if (basic_salary<=10000)
    {
        HRA = basic_salary/5 ;
        DA = (basic_salary*4)/5 ;
        gross_salary = basic_salary + DA + HRA ; 
        printf("The gross salary of the employee is %d . " , gross_salary);

    }
    else if (basic_salary<=20000)
    {
        HRA = basic_salary/4 ;
        DA = (basic_salary*9)/10 ;
        gross_salary = basic_salary + DA + HRA ; 
        printf("The gross salary of the employee is %d . " , gross_salary);

    }
    else if (basic_salary>20000)
    {
        HRA = (basic_salary*3)/10 ;
        DA = (basic_salary*19)/20 ;
        gross_salary = basic_salary + DA + HRA ; 
        printf("The gross salary of the employee is %d . " , gross_salary);

    }

    

}