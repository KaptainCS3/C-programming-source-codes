#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){
    char string[255];
    int i, sum = 0;
    scanf("%s", string);
    printf("%s:", string);
    for(i = 0; i < strlen(string); i++){
        sum = (int)string[i];
        printf(" %d," , sum);
    }
}