#include <stdio.h>
int main()
{
    int fahr, cel;
    int fahrenheit, celsius;
    printf("fahrenheit      celsius\n");
    for(int i= 10; i<=200; i+=10){
    celsius = (5*(i - 32))/9;
    printf("%10d%13d\n", i, celsius);

    };
             return 0;
}