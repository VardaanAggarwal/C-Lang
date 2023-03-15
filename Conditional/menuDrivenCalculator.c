#include <stdio.h>

int main() 
{
    long int first_num,second_num,choice,output;

    printf("Enter a first number of your choice: ");
    scanf("%ld",&first_num);
    printf("Enter a second number of your choice: ");
    scanf("%ld",&second_num);
    printf("Now choose any one of these options: ");
    printf("\nType 1 for Addition of the two numbers.");
    printf("\n Type 2 for Subtraction of the two numbers.");
    printf("\n Type 3 for Multiplication of the two numbers.");
    printf("\n Type 4 for Division of the two numbers.");
    printf("\n Type 5 for Modulus of the two numbers.");
    printf("\nEnter you choice from above options here: ");
    scanf("%ld",&choice);

    if (choice==1)
    {
        output=first_num+second_num;
        printf("Addition of the following two numbers is : %ld\n",output);
    }

    else if (choice==2)
    {
        output=first_num-second_num;
        printf("Subtraction of the following two numbers is : %ld\n",output);
    }
    else if (choice==3)
    {
        output=first_num*second_num;
        printf("Multiplication of the following two numbers is : %ld\n",output);
    }
    else if (choice==4)
    {
        output=first_num/second_num;
        printf("Division of the following two numbers is : %ld\n",output);
    }
    else if (choice==5)
    {
        output=first_num%second_num;
        printf("Modulus of the following two numbers is : %ld\n",output);
    }
    else
    {
        printf("WARNING! AN ERROR HAS BEEN DETECTED . Please check the numbers or choice you have input .\n");
    }

}