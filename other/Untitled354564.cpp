#include<stdio.h>
int main(){
	int n=1;
	double temp=3,sum=0;
	sum+=temp;
	while(temp>=1E-20){
		temp/=16;
		temp*=(2*n-1.);
		//temp/=(2*n+1.);
		temp/=(n+1.);
		temp/=(n+1.);
		temp*=(2*n+2.);
		temp*=(2*n+1.);
		sum+=temp;
		n++;
	}
	printf("%.10lf",sum);
	
	
	
	return 0;
}
