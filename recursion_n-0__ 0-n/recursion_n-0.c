#include<stdio.h>
void dis(int n){
	printf("%d\n", n);
	if(n >0)
		dis(n-1);
	}
int main(){
	dis(5);
	return 0;
	}