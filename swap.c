#include<stdio.h>
int main(void){
    int a = 3; int b = 5; int t = a;
    a = b;
    b = t;
    printf("%d %d", a, b);
}