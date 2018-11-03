#include<stdio.h>
int main(){
	int a,b,c,d,e,x;
	printf("input five-digit number :");
	scanf("%d",&x);
	a=x/10000+1;
	b=x/1000%10+1;
	c=x/100%10+1;
	d=x/10%10+1;
	e=x%10+1;
	printf("sum: %d \n",a+b+c+d+e-5);
	x=a*10000+b*1000+c*100+d*10+e;
	printf("output: %d",x);
	return 0;
}
