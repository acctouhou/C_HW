#include<stdio.h>
double  Round(double a,int x){
	double temp=0.5;
	for(int i=1;i<=x;i++){
		a*=10;
	}
	a+=temp;
	a=(int)a;
	for(int i=1;i<=x;i++)
		a/=10;
	return a;
}
int main(){
	double a;
	int x;
	scanf(" %lf %d",&a,&x);
	printf("%lf",Round(a,x));
	return 0;
}
