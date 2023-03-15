#include <stdio.h>
int main() {
    int total = 0 , i , j ;
    int Student[2][2];
    printf("The program is running successfully . ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; i++)
        {
            scanf("%d" , &Student[i][j]);
        }
        
    }
    for (i = 0; i < 2; i++)
    {
        total = 0 ;
        for (j = 0; j < 2; i++)
        {
            total += Student[i][j];
        }
        printf("\n%d" , total);
    }

    return 0;
    
}