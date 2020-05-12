#include<stdio.h>
#include<math.h>
int main(){
	int n=1,i=-1;
	double term=1,x,sum=0;
	scanf("%lf",&x);
	while(fabs(term)>1E-12){
		term*=x*x;
		term/=(2*n);
		term/=(2*n-1);
		sum+=term*i;
		printf("%lf\n",term);
		printf("%d\n",i);
		n++;
		i*=-1;
	}
	printf("%.12lf",sum+1.0);
	
	return 0;
}
