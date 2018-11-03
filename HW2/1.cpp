#include<stdio.h>
#include <math.h>
int main(){
	double x;
	printf("input :");
	scanf("%lf",&x);
	printf("the input value is %lf \n",x);
	printf("the whole part is %-32.0lf \n",x);
	printf("the decimal part is %lf \n",fmod(x,1));
	
	
	return 0;
} 
