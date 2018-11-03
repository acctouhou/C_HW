#include<stdio.h>
#include<math.h>
int main(){
	int n=1;
	double x,temp=1,sum=1;
	scanf("%lf",&x);
	while(fabs(temp)>1E-12){
		temp*=x*x;
		temp/=(2*n);
		temp/=(2*n-1);
		temp*=-1;
		sum+=temp;
		n++;
	}
	printf("%lf",sum);
	
	
	return 0;
}
