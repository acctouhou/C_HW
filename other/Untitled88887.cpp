#include<stdio.h>
int main(){
	char a='A';
	int x,temp;
	scanf("%d",&x);
	for(int i=1;i<=4*x-3;i++){
		temp=0;
		for(int j=1;j<=4*x-3;j++){
			if (i<x*2)
				j<(2*x-2+i)&&j>(2*x-i)?printf("  "):printf("%2c",a+temp/2);
			else
				j<(6*x-4-i)&&j>(i+2-2*x)?printf("  "):printf("%2c",a+temp/2);
			j<2*x-1?temp++:temp--; 
		}
		printf("\n");
		a='A';
	}
	return 0;
} 
