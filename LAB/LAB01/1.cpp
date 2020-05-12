#include<stdio.h>
int main(){
	int x;
	printf("Input:");
	scanf("%d",&x);
	printf("output:%d%d%d%d%d%d%d",x/64,x%64/32,x%32/16,x%16/8,x%8/4,x%4/2,x%2);
	
	return 0;
} 
