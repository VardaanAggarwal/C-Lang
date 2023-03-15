#include <stdio.h>

int main(void){
    for (int x=0;x!=7;x++){
        for (int y=0;y!=x+1;y++){
            printf("*");
        }
        for (int z=7-x-2;z>=0;z--){
            printf("  ");
        }
        for (int y=0;y!=x+1;y++){
            printf("*");
        }
        printf("\n");
    }
}