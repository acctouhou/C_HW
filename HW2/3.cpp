#include<stdio.h>
int main(){
	int data,digit;
	printf("input:");
	scanf("%d",&data);
	digit=data/100%10;
	printf("third-rightmost digit: %d \n",digit);
	printf("output: %3d,%03d,%03d",data/1000000,data/1000%1000,data%1000);
	return 0;
}
