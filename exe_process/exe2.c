#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    printf("We are in exe2.c\n");
    printf("PID of exe2.c = %d\n", getpid());
    return 0;
}