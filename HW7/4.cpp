#include<stdio.h>
int main(){
	double x=1,x_1;
	printf("input");
	scanf("%lf",&x_1);
	for(int i=100;i>0;i--){
		x=x-(x*x-x_1)/(2*x);
	}
	printf("%lf %lf ",x,-x);
	return 0;
}
