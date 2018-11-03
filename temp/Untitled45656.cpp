#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double temp,sum,x;
	while(1){
		scanf("%lf",&x);
		n=1;
		sum=x;
		temp=1;
		while(fabs(temp)>1E-20){
			temp*=(2*n-1.0);
			temp/=(2*n+1.0);
			temp*=(x*x);
			temp*=-1;
			sum+=temp;
			printf("\n");
			n++;
		}
		printf("%.10lf",sum);
	}
	return 0;
}
