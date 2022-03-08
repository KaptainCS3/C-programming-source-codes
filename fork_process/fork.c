#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(void){
    fork();
    printf("Hello it's Leonard!\n PID = %d\n", getpid());
}