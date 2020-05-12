#include<stdio.h>
int main(){
	int hour,minute,second,x;
	printf("input seconds:");
	scanf("%d",&x);
	hour=x/3600;
	minute=x/60-hour*60;
	second=x%60;
	printf("%d hours %d minutes %d seconds",hour,minute,second);
	return 0;
}
