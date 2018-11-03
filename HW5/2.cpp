#include<stdio.h>
#include<math.h>
int main(){
	int i=1,sign=1;
	double x,temp=1,sum;
	printf("input x:");
	scanf("%lf",&x);
	while(fabs(temp)>=1e-8){
		temp=1.0*sign;
		for(int j=1;j<=i;j++){
			temp*=x/j;
		}
		sum+=temp;
		i+=2;
		sign*=-1;
	}
	printf("%lf",sum);
	return 0;
}
