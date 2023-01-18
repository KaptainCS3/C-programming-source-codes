#include <stdio.h>
#include <math.h>
int one(int n);
int main()
{
    one(5);
    return 0;
}
int one(int n)
{
    if (n == 0)
        printf("1 here represent n == 0 \n");
    else
    {
        for (int i = 0; i < pow(2, n); i++)
        {
            
        }
    }
            one(n - 1);
}
