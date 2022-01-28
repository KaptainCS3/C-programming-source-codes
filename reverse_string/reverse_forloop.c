#include<stdio.h>
#include<string.h>
int main(void){
    int i;
    char str[20] = "Hello World!";
    for(i = strlen(str)- 1; i >= 0 ; i--)
    printf("%s", str[i]);
}
