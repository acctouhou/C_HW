#include<stdio.h>
int main(){
	int x;
	printf("Input:");
	scanf("%d",&x);
	x=x%10*10000+x/10%10*1000+x/100%10*100+x/1000%10*10+x/10000;
	printf("output:%d",x);
	return 0;
}
