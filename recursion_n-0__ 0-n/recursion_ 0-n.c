#include<stdio.h>
void dis(int n){
	if(n >0){
		dis(n-1);
	printf("%d\n", n);
	}
	}
int main(){
	dis(5);
	return 0;
	}
