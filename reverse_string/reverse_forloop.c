#include<stdio.h>
#include<string.h>
int main(void){
    int i;
    char str[] = "Hello World!";
    for(i = strlen(str)- 1; i >= 0 ; i--)
    printf("%c\n", str[i]);
}
