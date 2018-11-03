#include<stdio.h>
#include<math.h>
double get(){
	double term=sqrt(2)/2,sum_1=1,sum_2=0;
	sum_1=term;
	while(fabs(sum_2-sum_1)>1E-15){
		sum_2=sum_1;
		term=sqrt((term*2+2))/2;
		sum_1*=term;
	}
	return 2/sum_1;
}
int main(){
	int n=1;
	double sum=1,x,temp=1,term;
	while(1){
		n=0;
		scanf("%lf",&x);
		term=sqrt(2*(x+1));
		sum=-term;
		temp=1;
		
		while(term*temp>1E-15){
			n++;
			temp*=(x+1);
			temp/=(2*n+1);
			temp*=(2*n-1);
			temp/=8.;
			temp/=n*n;
			temp*=(2*n);
			temp*=(2*n-1);
			sum-=(temp*term); 
			//printf("%lf",temp);
		}
		printf("%.10lf",get()+sum);
	}
	return 0;
} 
