#include<stdio.h>
int main(){
	int n=1;
	double temp=1,pi=3;
	while(temp>1E-20){
		temp/=16;
		temp*=(2*n-1.0);
		temp/=(2*n+1.0);
		temp/=(n+1);
		temp/=(n+1);
		temp*=(2*n+2);
		temp*=(2*n+1);
		pi+=(3*temp);
		n++; 
		printf("f\n");
	} 
	printf("%.10lf",pi);
	
	
	return 0;
}
