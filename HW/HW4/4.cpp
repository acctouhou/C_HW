#include<stdio.h>
int main(){
	double x=1,y=0,sum=0;
	
	while(x!=0){
		scanf("%lf",&x);
		y+=x;
		if (y<=0){
			y=0;
		}
		if (y>sum){
			sum=y;
		}
	}
	printf("%lf",sum);
	
	
	return 0;
}
