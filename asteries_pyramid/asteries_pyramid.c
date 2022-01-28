#include<stdio.h>
//Reference from programiz.com 
int main(void){
    int i, j, k = 0;
    for(i = 1; i <= 8; ++i, k = 0){
        for(j = 1; j <= 8 - i; ++j){
            printf("  ");
        }
        while(k != 2 * i -1){
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}