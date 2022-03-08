#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    printf("PID of exe1.c = %d\n", getpid());
    char *args[] = {"Hello", "It's", "Leonard"};
    execv("./exe2", args);
    printf("Back to exe1.c");
    return 0;
}