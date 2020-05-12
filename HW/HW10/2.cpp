#include<stdio.h>
#include <math.h>
double test(double x,double y){
	int temp;
	y>0?temp=1:temp=0;
	y=fabs(y);
	if(y==0)
		return 1;
	if(y==1)
		return x;
	else{
		if(temp==1)
			return (x*test(x,y-1));
		else
			return 1/(x*test(x,y-1));
	}
}
int main(){
	int x,y;
	scanf("%d" "%d",&x,&y);
	printf("%lf",test(x,y));
	return 0;
}
