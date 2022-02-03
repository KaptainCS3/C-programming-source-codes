#include<stdio.h>

int main(void){
    int arr[] = {45, 98, 3};
    int n;
    // counting number of elements
    n = sizeof(arr)/sizeof(int);
    printf("num of element is: %d\n",n);
    // printing the data (traversing the array)
    int i;
    for(i = 0; i < n; i++)
    printf("pos of %d\n %d\n", i, arr[i]);
}