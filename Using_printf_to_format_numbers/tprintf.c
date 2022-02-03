/* Prints int and float values in various formats */
#include<stdio.h>
int main(void){
    int i = 25;
    float x = 830.37;
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-log|\n", x, x, x, x);
}