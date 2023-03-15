#include <stdio.h>
int main() {
    int n ,total_bill=0 , sur_charge  ;
    printf("Enter your energy usage in units : ");
    scanf("%d" , &n);
    if (n>0)
    {
        if (n<=50)
        {
            total_bill = n*0.5;
        }
        else if (n <= 150)
        {
            total_bill = 25 + ((n-50)*0.75);
        }
        else if (n <=250)
        {
            total_bill = 100 + ((n-150)*1.20);
        }
        else if (n>250)
        {
            total_bill = 220 + ((n-250)*1.50);
        }
    }
    else
    {
        printf("Your total bill is 0 .");
    }
    sur_charge = (total_bill*20)/100;
    total_bill += sur_charge;
    printf("Your total bill of electricty this month is %d ." , total_bill);
    
}