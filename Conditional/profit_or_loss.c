#include <stdio.h>

int main()
{

    int price , sale , profit , loss , result ;
    printf("Enter the amount in which you purchased the product : ");
    scanf("%d" , &price);
    printf("Enter the amount in which you sold the product : ");
    scanf("%d" , &sale);
    profit = sale>price ;
    loss = price>sale ; 

    if (profit)
    {
        printf("You have got the profit of Rs %d . \n" , sale-price);
    }
    else if (loss)
    {
        printf("You have got the loss of Rs %d . \n" , price-sale);
    }
    else
    {
        printf("You have neither got profit nor loss . \n");
    }
    
    
    

}