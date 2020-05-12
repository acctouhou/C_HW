#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
void c(double a,double b){
	double sum=1;
	for(int i=1;i<=b;i++){
		sum=sum*(a+1-i)/i;
		//printf("%lf\n",sum);
		
	}
	printf("%lf",sum);
}
int main(){
	double m,n;
	while(scanf("%lf",&n)){
		scanf("%lf",&m);
		c(m+n,m+1);
	}

	return 0;
}
