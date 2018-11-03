#include <stdlib.h>
#include <string.h>
#include<stdio.h>

int main(){
	int temp;
	int i=1;
	int a_1[16];
	scanf("%d",&temp);
	while(temp>0){
		a_1[i]=temp%10;
		i++;
		temp/=10;
	}
	
	printf("%d",a_1[i-1]);
	return 0;
}
